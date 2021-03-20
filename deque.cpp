#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    
    for(int i=0; i<5; i++){
        int n;
        cin >> n;
        d.push_back(n);
    }
    
    cout << endl;
    
    deque<int>::iterator it;


    for(it = d.begin(); it!=d.end(); it++){
        cout << *it;
    }
    
    cout << endl;
    
    it = d.begin();
    
    d.push_front(0);
    
    advance(it,2);
    d.emplace(it,69);
    
    for(it = d.begin(); it!=d.end(); it++){
        cout << *it;
    }
    
    cout << endl;
    
    for(auto it = d.rbegin(); it!=d.rend(); it++){
        cout << *it;
    }
    
    cout << endl;
    
    d.insert(d.begin()+1,96);
    
    for(auto i = d.begin(); i!=d.end(); i++){
        cout << *i;
    }

    return 0;
}

