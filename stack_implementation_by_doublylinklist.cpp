#include<bits/stdc++.h>
using namespace std;
class Node
    {
        public:  
           int val;
           Node* next;
           Node* prev;
           Node(int val)
           {
              this->val= val;
              this->next = NULL;
              this->prev = NULL;
           }
    };
    class mystack
    {
        public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

    void push(int val)
    {
        Node* newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        sz++;
    }
    void pop()
    {
        Node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
        sz--;

    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        // if(head == Null)
        // {
        // return true;
        // }
        // else{
        //     return false;
        // }
        return head == NULL;
    }
};

int main(){

    mystack st;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    while(!st.empty())
    {
    cout << st.top()<<endl;
    st.pop();
    }
   
  return 0;
}

