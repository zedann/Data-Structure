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
int partitioning(int arr[],int l, int h){
    int p = arr[l];
    int i = l;
    int j = h;
    while (i<j)
    {
        do
        {
            i++;
        } while (arr[i]<=p);
        do
        {
            j--;
        } while (arr[j]>p);
        if(i < j){
            swap(arr[i],arr[j]);
        } 
    }
    swap(arr[l] , arr[j]);
    return j;
}
void quickSort(int arr[],int l , int h){
    if(l<h){
       int piv = partitioning(arr,l,h);
        quickSort(arr,l,piv);
        quickSort(arr,piv+1,h);
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
quickSort(arr,0,n);
print(arr,n);
}   
