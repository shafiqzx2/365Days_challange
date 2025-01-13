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
int max_height(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main(){
    Node* root = input_tree();
    int cnt1 = max_height(root);
    cout << "Max_height:- " << cnt1 <<endl;
  return 0;
}