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
Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> q;
    if(root != NULL) q.push(root);

    while(!q.empty())
    {
        //ber kore ana
        Node* f = q.front();  //f = parent node
        q.pop();
        // oi node ke niye kaj
        int l, r;
        cin >> l >> r;
        Node* myleft, *myright;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);
        if(r == -1) myright = NULL;
        else myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        //children push
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        //ber krea ana
        Node* f = q.front();
        q.pop();
        //print node
        cout<< f->val <<" ";
        //children push kra
        if(f->left != NULL){
           q.push(f->left);
        }
        if(f->right != NULL){
        q.push(f->right);
        }
    }
}
int main()
{
    Node* root = input_tree();
    level_order(root);
   
  return 0;
}
