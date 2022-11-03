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
void merge(int arr[],int l , int m , int r){ // m = l + (r-l) / 2   "0 , 6"
int i ,j,k;
int n1 = m- l +1; //first subarray
int n2 = r - m; //second subarray
int L[n1] , R[n2];
for(i =0;i<n1;i++)
  L[i] = arr[l+i];
for(j =0;j<n1;j++)
    R[j] = arr[m+1+j];
i=j=0;
k = l;//0
while (i<n1 && j <n2)
{
    if(L[i] <= R[j]){
        arr[k] = L[i];
        i++;
    }else {
        arr[k] = R[j];
        j++;
    }
    k++;
}
while (i<n1)
{
    arr[k] = L[i];
    i++;
    k++;
}
while (j<n2)
{
    arr[k] = R[j];
    j++;
    k++;
}
}
void mergeSort(int arr[] , int l , int r){// 0 6 size 7 
    if(l < r){
        int m = l+(r- l)/2;//3
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void print(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{   
int arr[] = {60,10,20,5,60,70};
int n = sizeof(arr) / sizeof(arr[0]);
mergeSort(arr,0,n-1);
print(arr,n); //ASC change condition l[i] <= r[j] ====> l[i] >= r[j] DESC
}   
