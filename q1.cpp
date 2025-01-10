#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> qu;
    for(int i = 0; i<n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for(int i = 0; i<m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }
    int check = 1;
    if(m != n)  //n = 0 & m = 0;
    {
        check = 0;
    }
    else{
        while(!st.empty() && !qu.empty())
        {
            if(st.top() == qu.front())
            {
                st.pop();
                qu.pop();
            }
            else{
                check = 0;
                break;
            }
        }
    }
    if(check == 1) cout<< "YES" <<endl;
    else cout << "NO" <<endl;

   
  return 0;
}
