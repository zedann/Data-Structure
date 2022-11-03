#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int>v(10);
    for(int i =0 ; i < 10 ; i++)
        v[i] = i;
    cout << "vector size : " << v.size() << "\n";
    cout << "vector elements are : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    v.resize(5);
    cout << "vector size : " << v.size() << "\n";
    cout << "vector elements are : \n";
    v.shrink_to_fit();
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }
    
    
    
}
