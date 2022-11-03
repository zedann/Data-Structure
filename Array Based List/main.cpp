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
class arrayList{
    int *arr;
    int maxSize;
    int length;
    public :
     arrayList(int s){
        if(s < 0){
            maxSize = 10;
        }else {
            maxSize = s;
        }
        length = 0;
        arr = new int[maxSize];
     }

     bool isEmpty(){
        return length == 0;
     }
     bool isFull(){
        return length == maxSize;
     }
     int getSize(){
        return length;
     }
     void print(){
        for(int i = 0 ; i < length;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
     }
     void insertAt(int pos , int element){
        if(isFull()){
            cout << "List Full\n";
        }else if (pos < 0 || pos > length ){
            cout << "Out Of Range!!\n";
        }else {
            for(int i = length ; i > pos ; i --){
                arr[i] = arr[i-1];
            }
            arr[pos] = element;
            length++;
        }
     }
     void insertAtEnd(int element){
        if(isFull()){
            cout << "List Full\n";
        }else {
            arr[length]= element;
        }
        length++;
     }
     int search(int element){
        for (int i = 0; i < length; i++)
        {
            if(arr[i] == element){
                return i;
            }
        }
            return -1;
     }
     void insertNoDuplicate(int element){
        if(search(element) == -1){
            insertAtEnd(element);
        }else {
            cout << "This Element Already Exist!!\n";
        }
     }
     void updateAt(int pos , int element){
         if (pos < 0 || pos >= length )
            cout << "Out Of Range!!\n";
        else {
            arr[pos] = element;
        }
     }
     void removeAt(int pos ){
        if(isEmpty()){
            cout << "List Empty\n";
        }else if (pos < 0 || pos > length ){
            cout << "Out Of Range!!\n";
        }else {
            for(int i = pos ; i <length ; i ++){
                arr[i] = arr[i+1];
            }
            length--;
        }
     }
     int getElement(int pos){
        if(isEmpty()){
            cout << "List Empty\n";
        }else if (pos < 0 || pos > length ){
            cout << "Out Of Range!!\n";
        }else{
            return arr[pos];
        }
     }

    void clear(){
        length = 0;
    }
     ~arrayList(){
        delete[]arr;
     }

};

int main()
{   
   arrayList ar(100);
   ar.insertAt(0,10);
   ar.insertAt(1,20);
   ar.insertAtEnd(30);
   ar.insertNoDuplicate(50);
   ar.updateAt(0,40);
   cout << ar.getElement(1) << "\n";
   cout <<"size before clear"<< ar.getSize() << "\n";
   ar.clear();
   cout <<"size after clear"<< ar.getSize() << "\n";
   ar.print();

}   
