#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i =0; i<n; i++){
        string s;
        cin >> s;
        stack<char> st;
        for(char val : s){
            if(val == '1'){
            if(!st.empty() && st.top() != val){
                    st.pop();
                }
            else{
                st.push(val);
            }
            }
            else{
                st.push(val);
            }
        }
        if(st.empty()) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
    return 0;
}