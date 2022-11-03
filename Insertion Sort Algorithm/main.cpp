#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

void insertionSort(int arr[],int n){
    // 0   1   2  3  4  5   6
    // 10 , 5 ,7 ,3 ,2 ,6 , 9
    int key,j;
    for(int i = 1 ; i < n ; i++){
        key = arr[i];
        j = i -1 ;
        while (j>=0&&arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
    }
    
}
void printArr(int arr[],int n){
    for(int i =0 ; i < n ; i ++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{   
int arr[] = {10 , 5 ,7 ,3 ,2 ,6 , 9};
int n = sizeof(arr) / sizeof(arr[0]);
insertionSort(arr,n);
printArr(arr,n);


return 0;
}   
