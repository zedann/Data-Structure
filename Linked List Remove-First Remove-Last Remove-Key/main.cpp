#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
class linkedList {
struct Node
{
    int item;
    Node *next;
};
Node*first;
Node*last;
int length;
public : 
linkedList(){
    first = last = NULL;
    length = 0;
}
bool isEmpty(){
    return length == 0;
}
void insertFirst(int element){
        Node *newNode =  new Node;
        newNode->item=element;
    if(isEmpty()){
        first = last = newNode;
        newNode->next = NULL;
    }else {
        newNode->next = first;
        first = newNode;
    }
    length++;
}
void insertLast(int element){
        Node *newNode =  new Node;
        newNode->item=element;
    if(isEmpty()){
        first = last = newNode;
        newNode->next = NULL;
    }else {
        last->next = newNode;
        newNode->next = NULL;
        last = newNode;
    }
    length++;
}
void insertAtPos(int pos,int element){
    if(pos<0 || pos>length) cout << "out of range";

    else{
            Node *newNode = new Node;
            newNode->item = element;
                if(pos == 0)insertFirst(element);
                    else if (pos==length) insertLast(element);
                        else {
                            Node *cur = first;
                            for(int i = 1 ; i < pos;i++){
                                cur=cur->next;
                            }
                            newNode->next = cur->next;
                            cur->next = newNode;
                            length++;
        }
    }
}
void removeFirst(){
    if(isEmpty()){
        cout << "List Is Empty!\n";
    }else if (length == 1) {
        delete first;
        last = first = NULL;
        length --;
    }else{
    Node*cur = first;
    first = first->next;
    delete cur;
    length --;
    }
}
void removeLast(){
    if(isEmpty()){
        cout << "List Is Empty!";
    }else if (length == 1) {
        delete first;
        last = first = NULL;
        length --;
    }else{
    Node *cur = first->next;
    Node *prev = first;
    while(cur!=last){
        prev = cur;
        cur = cur->next;
    }
    delete cur;
    prev->next = NULL;
    last = prev;
    length--;
    }
}
void removeKey(int element){
    Node *cur,*prev;
    if (first->item == element) {
        cur = first;
        first = first->next;
        delete cur;
        length--;
        if(length == 0) last = NULL;
    }else{
        cur = first->next;
        prev = first;
        while (cur != NULL)
        {
            if(cur->item == element){
                break;
            }
            prev = cur;
            cur = cur->next;
        }
        if(cur == NULL){
            cout << "Item Is Not Exist\n";
        }else if(last == cur){
            last = prev;
            delete cur;
            length--;
        }else {
            prev->next = cur->next;
            delete cur;
            length--;
        }
        
        
    }
}
void reverse(){
    Node*cur,*prev,*next;
    prev = NULL;
    cur = first;
    next = cur->next;
    while (next!=NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    first = prev;
    
}
int searchKey(int element){
    Node *cur = first;
    int pos=0;
    while (cur!=NULL)
    {
        if(cur->item == element)
            return pos;
        cur=cur->next;
        pos++;
    }
    return -1;
    
}
void print(){
     Node *cur = first;
     while(cur!=NULL){
        cout << cur->item << " ";
        cur = cur->next;
     }
}


};
int main()
{   
    linkedList ls;
    ls.insertFirst(10);
    ls.insertFirst(20);
    ls.insertFirst(30);
    ls.insertLast(40);
    ls.insertLast(50);
    ls.insertLast(60);
    ls.insertAtPos(2,77);
    // ls.reverse();
    cout << "search " << ls.searchKey(50) << "\n";
    ls.print();
    
}
