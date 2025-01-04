#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int> l0;
   int n;
   cin >> n;
   for(int i =0; i<n; i++){
    int pos, val;
    cin >> pos >> val;
    if(pos == 0){
        l0.push_front(val);
    }
    else if(pos ==1){
        l0.push_back(val);
        
    }
    else if(pos == 2){
        if(val < l0.size()){
        l0.erase(next(l0.begin(), val));
        }
    }
    cout << "L -> ";
    for(int val : l0){
    cout << val << " ";
   }
   cout <<endl;

   

   list<int> l1(l0);
   l1.reverse();
   cout << "R -> ";
   for(int val : l1){
   cout << val << " ";
   }
   cout <<endl;
   }
   
    return 0;
}