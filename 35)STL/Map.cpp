#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // Map stores data in key value pair
    // Search, delete, insert - O(log n)
    // Key is unique but value is duplicate
    // AVL tree is used in implementation of MAP
    // We can modify index on our own

    map<int, int> m;
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 30));
    m[100] = 60; // insert kar sakte ho value ko, aur ye update bhi kar deta hai
    m[20] = 70;

    for(auto it = m.begin(); it!= m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }


    cout<<m[200]<<endl; // 0 - key is not present
    
    if(m.count(200)){
        cout<<m[200]<<" ";
    }


    // Duplication in key is allowed
    multimap<int, int> mp;
    // mp[100] = 60; 
    // Ye syntax allowed nhi hai because usko pata nhi chalega ki update karna hai yaa, create karna hai.
}