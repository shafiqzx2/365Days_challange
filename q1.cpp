#include<bits/stdc++.h>
using namespace std;
int main(){
   list<int> l;
   int a ;
   while(true){
    cin >> a;
    if(a == -1){
      break;
    }
    else{
      l.push_back(a);
    }
   }
  //  l.sort();
  //  l.unique(); 

  for(auto firstpoint = l.begin(); firstpoint != l.end(); firstpoint++){
    // for(auto sec_point = firstpoint+1; sec_point != l.end(); sec_point++){
    auto sec_point = firstpoint;
    sec_point++;
    while(sec_point != l.end()){
      if(*sec_point == *firstpoint){
        sec_point = l.erase(sec_point);
      }
      else{
        sec_point++;
      }
      
    }
    l.sort();

  }
  for(int val : l){
    cout << val << " ";
   }
   cout <<endl;

  //  list<int> l1;

  //  for(int val : l){
  //     auto it = find(l1.begin(), l1.end(), val);
  //     if(it == l1.end()){
  //      l1.push_back(val);
  //     }
  //  }
  //  l = l1;
  //  l.sort();
  // for(int val : l){
  //   cout << val << " ";
  //  }
  //  cout <<endl;

//  for(int val: l, int i = 0; i<l.size(); i++){
//     for(int j = i+1; j<l.size(); j++){
//       l.remove(next(l.begin(),j), next(l.begin(), l.size()), val);
//     }


//   }
//   for(int val : l){
//     cout << val << " ";
//    }
//    cout <<endl;
  


  return 0;
}
