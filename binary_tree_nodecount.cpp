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
//input node
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
//count node using recurshion funstion
int count_nodes(Node* root)
{
    if(root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);   
    return l+r+1; 
}
//count node using level order function
int level_order(Node* root)
{
    queue<Node *> q;
    int count = 0;
    q.push(root);
    while(!q.empty())
    {
        //ber krea ana
        Node* f = q.front();
        q.pop();
        //print node
        count++;
        //children push kra
        if(f->left != NULL){
           q.push(f->left);
        }
        if(f->right != NULL){
        q.push(f->right);
        }
    }
    return count;
}
int main(){
    Node* root = input_tree();

    int cnt = level_order(root);
    cout << "Total Node:- " <<cnt<<endl;

    int cnt1 = count_nodes(root);
    cout << "Total Node:- " <<cnt1<<endl;
  return 0;
}