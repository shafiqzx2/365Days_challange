#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string> q;
    for(int i =0; i<n; i++){
        int check;
        cin >> check;
        if(check == 1){
            if(q.empty()){
                cout << "Invalid" <<endl;
            }
            else{
                cout << q.front() <<endl;
                q.pop();
            }
        }
        else{
            string s;
            cin >> s;
            q.push(s);
        }
    }
   
  return 0;
}
