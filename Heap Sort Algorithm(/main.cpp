#include <bits/stdc++.h>
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

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

print(arr,n);
}   
