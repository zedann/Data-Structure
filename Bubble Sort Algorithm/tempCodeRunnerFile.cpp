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


int main()
{   
    long long  n1,n2;
    cin>>n1>>n2;
    bool check = false;
    
    for(int i = n1 ; i <= n2 ; i++)
    {
        int temp = i;
        bool flag = true;

        while (temp != 0)
        {
            int dig = temp % 10;
            temp /= 10;
            if(dig == 4 || dig == 7){
                continue;
            }else{
                flag =false;
                break;
            }
        }
        if(flag){
            cout << i <<" ";
            check = true;
        }
    }
    if(!check){
        cout << -1 << " ";
    }
   
    
    
    
    
    
}   
