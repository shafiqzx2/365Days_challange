#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        return l.empty();
    }
};

class myqueue
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front(){
        return l.front();
        }
    bool empty(){
        return l.empty();
    }
};

int main(){
    mystack st;
    myqueue qu;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        qu.push(x);
    }
    
    int check = 1;
    if(m != n) 
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

