#include <bits/stdc++.h>
using namespace std;
class ArrayList
{   
    private:
    int *arr;
    int length;
    int SIZE;
    public:
     ArrayList(int s){
        if(s < 0){
            SIZE = 10;
        }else {
            SIZE = s;
        }
        length = 0;
        arr = new int[SIZE];
    }
    bool isEmpty()
    {
        return length == 0;
    }
    bool isFull(){
        return SIZE == length;
    }
    int getSize()
    {
        return length;
    }
    /**
     * @brief display array
     * 
     */
    void display(){
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    /**
     * @brief insert item by index
     * 
     * @param index 
     * @param item 
     */
    void insertByIndex(int index,int item){
        if(index > SIZE || index < 0){
            cout << "INVALID";
        }else {
            arr[index] = item;
            length++;
        }
    }
    /**
     * @brief insert item at specific position
     * 
     * @param pos 
     * @param item 
     */
    void insertAt(int pos , int item){
        if(pos < 0 || pos > length){
            cout << "INVALID";
        }else if (isFull()){
            cout << "LIST IS FULL";
        }else {
        for (int i = length; i >= pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos-1] = item;
        length++;
        }
    }
    /**
     * @brief delete item by its position
     * 
     * @param pos 
     */
    void deleteItem(int pos){
        if(isEmpty()){
            cout << "list is empty";
        }else if(pos > length || pos < 0){
            cout << "invalid";
        }else {
            for (int i = pos-1; i < length-1; i++)
            {
                arr[i]= arr[i+1];
            }
            length--;
        }
    }
    /**
     * @brief return index of element
     * 
     * @param item 
     * @return int 
     */
    int find(int item){
        for (int i = 0; i < length; i++)
        {
            if(arr[i] == item){
                return i;
            }
        }
        
    }

};
int main()
{
   ArrayList a(5);
   a.insertByIndex(0,1);
   a.insertByIndex(1,2);
   a.insertByIndex(2,3);
   a.insertAt(2,5);
   a.deleteItem(3);
   cout << "index : " << a.find(3) << "\n"; 
   a.display();
}
