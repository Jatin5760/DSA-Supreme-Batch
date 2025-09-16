#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // Unordered set - Stores unique element
    // It stored data in unordered way.
    // Search, insert, delete - O(1) mai ho jayega, Normal set mai O(log n) lag raha hai.

    // Hashing se hota hai under the hood kaam.

    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(11);
    s.insert(10);

    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;
    // if duplicate elements then
    unordered_multiset<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(15);
    s1.insert(11);
    s1.insert(10);

    for(auto it : s1){
        cout<<it<<" ";
    }
    return 0;
}