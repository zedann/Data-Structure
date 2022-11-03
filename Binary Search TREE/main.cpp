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
enum Order{
    InOrder,
    PerOrder,
    PostOrder
};
class BST{
    struct Node
    {
        int data;
        Node*right;
        Node*left;
    };
    Node*root;
    public:
        BST(){

        }
        bool contains();
        void insert();
        void traverse(Order);
        void remove();
    private :
    void InOrder(){
        
    }
    void PreOrder(){

    }
    void InOrder(){

    }
};
int main()
{   
     
}

