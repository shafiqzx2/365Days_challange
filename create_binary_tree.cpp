#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
       int val;
       Node* left;
       Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main(){
    Node* root = new node(10);
    Node* a = new node(20);
    Node* b = new node(30);
    Node* c = new node(40);
    Node* d = new node(50);
    Node* e = new node(60);
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;   
  return 0;
}
