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

void bubbleSort(int arr[],int n){
    //0  1   2   3  4  5
    //20 50 60 90 70 100 => 
    int flag = 0,c=0;
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap (arr[j],arr[j+1]);
                flag = 1;
            }
        }
            c++;
        if(!flag){
            break;
        }
    }
    cout <<"pass : " <<c << "\n";
}
void printArr(int arr[],int n){
    for(int i =0 ; i < n ; i ++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{   
int arr[] = {10,5 ,7 ,3  ,2 ,6 , 9};
int n = sizeof(arr) / sizeof(arr[0]);
bubbleSort(arr,n);
printArr(arr,n);


return 0;
}   
