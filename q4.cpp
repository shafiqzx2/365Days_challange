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

void addnodehead(Node* &head, Node* &tail, int val )
 {
    Node* newnode = new Node(val);
     if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    }

 void addnodetail(Node* &head , Node* &tail, int val)
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
 void addanyposition(Node* head, int idx, int val)
 {
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 0; i<idx-1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;

 }

 int sizecheck(Node* head){
    int c = 0;
    Node* temp = head;
    while (temp != NULL)
    {
       c+=1;
       temp = temp->next;
    }
     
    return c;

 }


  void print_left(Node* head)
 {
    cout <<"L ->" << " ";
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout <<endl;
    
 } 
  void print_right(Node* tail)
  {
    cout <<"R ->" << " ";
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout <<endl;
    
 }


int main(){

   Node* head = NULL;
   Node* tail = NULL;
    
   int n;
   cin >> n;
   for(int i = 1; i<=n; i++)
   {
    int pos, val;
    cin >> pos >> val;
    int size = sizecheck(head);
    if(size >= pos){
      if(pos == 0){
      addnodehead(head, tail, val);
      print_left(head);
      print_right(tail);
      }
      else if(size == pos){
      addnodetail(head, tail, val);
      print_left(head);
      print_right(tail);
      }
      else{
        addanyposition(head, pos, val);
        print_left(head);
        print_right(tail);
      }
    }
    else if(pos < 0 || pos > size){
        cout << "Invalid" <<endl;
    }
     
   }
   
  return 0;
}
