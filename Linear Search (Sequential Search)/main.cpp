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
int linearSearch (int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
    
}
int main()
{   
int arr[] = {60,10,20,5,60,70};
int n = sizeof(arr) / sizeof(arr[0]);
int num; cout << "Enter Number : "; cin >> num;
int res = linearSearch(arr,n,num);
if(res == -1) cout << "Number Not fOUND\n";
else cout << "number "<<arr[res]<<" in pos :"<< res << "\n";


}   
