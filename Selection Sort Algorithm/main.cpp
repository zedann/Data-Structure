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
void swap (int &x,int&y){
    int temp = x;
    x = y;
    y = temp;
}
void sort(ll arr[],ll n){
     for(int i = 0 ; i < n-1 ; i++)
     {
        int minIdx = i;
        for(int j = i+1 ; j < n ; j++ ){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        swap(arr[i] , arr[minIdx]);
     }
    for(int k = 0 ; k < n ; k++)
        cout << arr[k] << " ";
}
void solve(){
    ll n;cin>>n;
    ll arr[n];
    for(int i = 0 ; i < n;i++)
        cin>>arr[i];
    sort(arr,n);
    
}
int main()
{   
 fastIO
solve();


return 0;
}   
