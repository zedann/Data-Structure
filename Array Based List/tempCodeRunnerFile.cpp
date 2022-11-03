#include <iostream> 
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   long long s1,e1,s2,e2; cin>>s1>>e1>>s2>>e2;
   if(s2 <= e1){
    cout << s2 << " " << e1;
   }else if (s2 < s1 && e2< e1)
    cout << s2 << " " << e1;
   
   else {
    cout <<"-1";
   }
    
    
}
