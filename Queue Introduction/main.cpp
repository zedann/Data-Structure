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
// const int MAX_LENGTH = 100;
template <class t>
class arrayQueueType{
    int rear; //tail
    int front; //head
    int length; //check full / empty
    t *arr;
    int maxSize;
 
    public:
        arrayQueueType(int size){
            
            if(size <= 0)
                maxSize = 100;
            else 
                maxSize = size;
            front = 0;
            arr = new t[maxSize];
            rear = maxSize - 1;
            length = 0;
        }
        int isEmpty(){
            return length == 0;
        }
        bool isFull(){
            return length == maxSize;
        }
        void addQueue(t Element){
            if(isFull()){
                cout << "Queue Full Can Not Enqueue\n";
            }else {
                rear = (rear + 1) % maxSize;
                arr[rear] = Element; 
                length++;
            }
        }
        void deleteQueue()
        {
            if(isEmpty()){
                cout << "Queue Empty Can Not Dequeue\n";
            }else{
                front = (front+1)%maxSize;
                length--;
            }
        }
        int frontQueue(){//peak
            assert(!isEmpty());
            return arr[front];
        }
        int rearQueue(){
            assert(!isEmpty());
            return arr[rear];
        }
        void printQueue(){
            if(isEmpty()){
                cout << "Queue Empty!";
            }else{
            for(int i = front ; i != rear ; i=(i+1)%maxSize ){
                cout << arr[i] << " ";
            }
            cout << arr[rear]<< " ";
            }
            
        }
        int queueSearch(t element){
           int pos = -1;
           if(!isEmpty()){
                for(int i = front ; i != rear ; i=(i+1)%maxSize ){
                    if(arr[i] == element){
                        pos = i;
                        break;
                    }
                }
                if(pos == -1){
                    if(arr[rear] == element){
                        return rear;
                    }
                }
                
           }else {
            cout << "QUEUE IS EMPTY\n";
           }
            return pos;

        }
};

int main()
{   
    arrayQueueType <char> q1(5);
    q1.addQueue('a');
    q1.addQueue('b');
    q1.addQueue('c');
    q1.addQueue('d');
    q1.addQueue('e');
    cout << "front"<< q1.frontQueue()<<"\n";
    cout << "rear"<< q1.rearQueue()<<"\n";
    q1.printQueue();

}
