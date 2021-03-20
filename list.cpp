#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l{1,2,3,4,5};
    
    list<int>::iterator it;
    
    for(it=l.begin(); it!=l.end(); it++){
        cout << *it;
    }
    
    l.push_back(6);
    l.push_front(0);
    for(it=l.begin(); it!=l.end(); it++){
        cout << *it;
    }
    
    cout << endl;
    
    l.pop_back();
    l.pop_front();
    for(it=l.begin(); it!=l.end(); it++){
        cout << *it;
    }
    
    cout << endl;
    
    list<int> a;
    for(int i=0; i<5; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    list<int>::iterator i;
    for(i=a.begin(); i!=a.end(); i++){
        cout << *i;
    }
    
    cout << endl;
    
    for(auto t = a.rbegin(); t!=a.rend(); t++){
        cout << *t;
    }
    
    cout << endl;
    
    //to insert 23 before 30
    
    // iterator to point to 3rd position 
    advance(i,3); 
    a.insert(i,25);
    
    for(i=a.begin(); i!=a.end(); i++){
        cout << *i;
    }
    
    cout << endl;
    
    advance(i,4);
    a.erase(i);
    for(i=a.begin(); i!=a.end(); i++){
        cout << *i;
    }
    
    cout << endl;
    
    list<int>l1{1,5};
    auto i1 = l1.begin();
    advance(i1,1);
    l1.insert(i1,2);
    i++;
    l1.insert(i1,3);
    i1++;
    l1.insert(i1,4);
    for(i1=l1.begin(); i1!=l1.end(); i1++){
        cout << *i1;
    }
    return 0;
}


