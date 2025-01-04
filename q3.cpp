#include<bits/stdc++.h>
using namespace std;
class Node
    {
        public:  
           string text;;
           Node* next;
           Node* prev;
           Node(string text)
           {
              this->text= text;
              this->next = NULL;
              this->prev = NULL;
           }
    };
 void insert_tail(Node* &head , Node* &tail, string text)
 {
    Node* newnode = new Node(text);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    
 }

//  void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->text << " ";
//         temp = temp->next;
//     }
//  }

int main(){

   Node* head = NULL;
   Node* tail = NULL;

   string text;
   while(true)
   {
    cin >> text;
    if(text == "end"){
        break;
    }
    insert_tail(head, tail, text);
   }
   Node* temp = head;
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++){
   string con;
   cin >> con;
   Node* check1 = head;
   if(con == "visit"){
    string check;
    cin >> check;
    int fnd = 0;
    while(check1 != NULL){
        if(check1->text == check)
        {
            temp = check1;
            fnd = 1;
            break;
        }
        else
        {
            check1 = check1->next;
        }
    }
    if(fnd == 1){
        cout << check <<endl;
    }
    else{
        cout << "Not Available" << endl;
    }
   }
   else if(con == "prev")
   {
    if(temp->prev != NULL){
        temp = temp->prev;
        cout << temp->text <<endl;
        
    }
    else{
        cout << "Not Available" << endl;
    }
   }

   else if(con == "next")
   {
    if(temp->next != NULL){
        temp = temp->next;
        cout << temp->text <<endl;
        
    }
    else{
        cout << "Not Available" << endl;
    }
   }
   }
//    print(head);

   
  return 0;
}
