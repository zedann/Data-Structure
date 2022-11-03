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
class doubleLinkedList{
    struct Node
    {
        int item;
        Node*next;
        Node*prev;
    };

    Node *first;
    Node *last;
    int length;
    public: 
    doubleLinkedList(){
        first = last = NULL;
        length = 0;
    }
    bool isEmpty(){
        return length == 0;
    }
    void insertFirst(int element){
        Node*newNode = new Node;
        newNode->item = element;
        if(isEmpty()){
            first = last = newNode;
            newNode->next = newNode->prev  = NULL;
        }else {
            newNode->next = first;
            newNode->prev = NULL;
            first->prev = newNode;
            first = newNode;
        }
        length++;
    }
    void insertLast(int element){
        Node*newNode = new Node;
        newNode->item = element;
        if(isEmpty()){
            first = last = newNode;
            newNode->next = newNode->prev  = NULL;
        }else{
            newNode->next = NULL;
            newNode->prev = last;
            last->next = newNode;
            last = newNode;
        }
        length ++;
    }
    void insertAt(int pos,int element){
        if(pos < 0 || pos > length){
            cout << "out of range" << "\n";
        }else if(pos == 0){
            insertFirst(element);
        }else if (pos == length)
        {
           insertLast(element); 
        }else {
            Node *newNode = new Node;
            newNode->item = element;
            Node*curr = first;
            for (int i = 1; i < pos; i++)
            {
                curr= curr->next;
            }
            newNode->next = curr->next;
            newNode->prev = curr;
            curr->next->prev = newNode;
            curr->next = newNode;
            length++;
        }
    }
    void removeFirst(){
        if(isEmpty()){
            cout << "List Is Empty\n";
        }else if (length == 1){
            Node*curr = first;
            first = last = NULL;
            delete curr;
            length--;
        }else{
            Node*curr = first;
            first = first->next;
            first->prev = NULL;
            delete curr;
            length--;
        }
    }
    void removeLast(){
        if(isEmpty()){
            cout << "List Is Empty\n";
        }else if (length == 1){
            Node*curr = first;
            first = last = NULL;
            delete curr;
            length--;
        }else{
            Node*curr = last;
            last = last->prev;
            last->next = NULL;
            delete curr;
            length--;
        }
    }
    void remove(int element){
        if(isEmpty()){
            cout << "List Is Empty\n";        
        }else if(first->item == element){
            removeFirst();
        }else {
            Node *curr = first->next;
            while (curr != NULL)
            {
                if(curr->item == element){
                    break;
                }
                curr  = curr->next;
            }
            if(curr == NULL){
                cout << "Not Found";
            }else if (curr->next == NULL){
                removeLast();
            }else {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
                length --;
            }
            
        }
        
    }
    void display(){
        cout << "list elements : ";
        Node*cur = first;
        while (cur!=NULL)
        {
            cout << cur->item << " ";
            cur = cur->next;
        }
        cout << "\n";
    }
    void reverseDisplay(){
        cout << "list elements reversed : ";
        Node*cur = last;
        while (cur!=NULL)
        {
            cout << cur->item << " ";
            cur = cur->prev;
        }
        cout << "\n";
    }
    
};
int main()
{   
    doubleLinkedList dl;
    dl.insertAt(0,20);
    dl.insertFirst(10);
    dl.insertFirst(30);
    dl.insertLast(40);
    dl.insertLast(50);
    dl.insertLast(60);
    dl.removeFirst();
    dl.removeLast();
    dl.remove(20);
    dl.reverseDisplay();
    dl.display();
}
