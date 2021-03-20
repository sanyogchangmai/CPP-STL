#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    
    for(int i=0; i<5; i++){
        int n;
        cin >> n;
        q.push(n);
    }
    
    cout << q.size() << endl;
    cout << q.front() << " " << q.back() << endl;
    
    
    //printing
    while(!q.empty()){
        cout << q.front();
        q.pop();
    }
    
    

    return 0;
}

