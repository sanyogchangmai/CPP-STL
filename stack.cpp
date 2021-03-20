#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    for(int i=0; i<5; i++){
        int n;
        cin >> n;
        st.push(n);
    }
    
    cout << st.size() << endl;
    
    //printing
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    
    cout << endl;
    
    cout << st.size();
    
    return 0;
}