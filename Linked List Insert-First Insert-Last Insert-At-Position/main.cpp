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
    ls.print();
    
}
