#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    
    for(int i=0; i<5; i++){
        int n;
        cin >> n;
        pq.push(n);
    }
    
    cout << pq.size() << endl;
    
    pq.pop();
    
        while(!pq.empty()){
        cout << pq.top();
        pq.pop();
    }
    

    return 0;
}

