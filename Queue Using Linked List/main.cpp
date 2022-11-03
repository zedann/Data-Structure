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
template <class t>
class LinkedQueue
{
    private:
    struct Node
    {
        t item;
        Node *next;
    };
    Node *front;
    Node *rear;
    t length;
    public: 
    LinkedQueue(){
        front = rear = NULL;                                                                                                                    
        length = 0;
    }
    bool isEmpty(){
        return rear == NULL;
    }
    void Enqueue(t element)
    {
        if(isEmpty()){
           front = new Node;
           front->item = element;
           front->next = NULL;
           rear = front;
           length++;
        }else{
           Node *newPtr = new Node;
           newPtr->item = element;
           newPtr->next = NULL;
           rear->next = newPtr;
           rear = newPtr;
           length++;
        }

    }
    void Dequeue()
    {
        if(isEmpty()){
            cout << "Linked Queue is Empty\n";
        }else {
            Node *temp = front;
            if(front == rear){
                front = NULL;
                rear = NULL;
                length=0;
            }else {
                front = front->next;
                temp->next = NULL;
                delete temp;
                length--;
            }
        }
    }
    t getFront(){
        if(isEmpty()){
            cout << "Queue Empty";
        }else 
            return front->item;
    }
    void getFront(int &e){ //by ref;
        if(isEmpty()){
            cout << "Queue Empty";
        }else 
            e = front->item;
    }
    t getRear(){
        if(isEmpty()){
            cout << "Queue Empty";
        }else 
            return rear->item;
    }
    void clearQueue(){
        Node *current = new Node;
        while (front != NULL){
            current = front;
            front = front->next;
            delete current;
        }
        rear = NULL; 
        length = 0;
    }
    void printQueue(){
        Node *cur = front;
        while (cur !=NULL)
        {
            cout << cur->item <<" ";
            cur = cur->next;
        }
        
    }
    void getSize(){
        cout <<"size :" << length <<"\n";
    }

};
int main()
{   
    LinkedQueue <char>q;
    q.Enqueue('a');
    q.Enqueue('b');
    q.Enqueue('c');
    cout << q.getFront()<<"\n";
    cout << q.getRear()<<"\n";
    q.getSize();
    q.printQueue();
}
