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
int binarySearch(int arr[],int l,int h , int key){
    while (l<=h)
    {
        int m = (l+h)/2;
        if(arr[m] == key) {
            return m;
        }
        if(arr[m] > key){
            h = m -1;
        }else {
            l = m + 1;
        }
    }
    return -1;
    
}


int main()
{   
int arr[] = {60,10,20,5,60,70};
int n = sizeof(arr) / sizeof(arr[0]);
int num; cout << "Enter Number : "; cin >> num;
sort(arr,arr+n);
for(int i =0 ; i < n ; i++)
    cout << arr[i] << " ";
    cout << "\n";
int res = binarySearch(arr,0,n-1,num);
if(res == -1){
    cout << "not found\n";
}else {
    cout << "pos = " << res << " num = " << arr[res];
}


}   
