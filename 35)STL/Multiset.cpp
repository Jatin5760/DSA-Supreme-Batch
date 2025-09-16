#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int>s; // works like a normal set but it allows duplication of values but the order will be sorted always
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(30);
    s.erase(10); // dono 10 erase hogye


    for(auto it: s){
        cout<<it<<" ";
    }

    return 0;
}