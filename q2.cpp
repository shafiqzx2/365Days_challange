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
 void insert_tail(Node* &head , Node* &tail, int val)
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
    
 }

 int check_plindrome(Node* head, Node* tail)
 {  
    int c = 1;
    for(Node* i = head, *j = tail;i!=j && i->prev != j ; i = i->next, j = j->prev){
      if(i->val != j->val){
         c = 0;
         break;
      }
    }
    return c;
 }


int main(){

   Node* head = NULL;
   Node* tail = NULL;

   int val;
   while(true)
   {
    cin >> val;
    if(val == -1){
        break;
    }
    insert_tail(head, tail, val);
   }
   int check = check_plindrome(head, tail);
   if(check == 1){
      cout<< "YES";
   }
   else{
      cout<< "NO";
   }
   
  return 0;
}
