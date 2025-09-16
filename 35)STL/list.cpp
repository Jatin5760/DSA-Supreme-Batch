#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // ye doubly linkedlist ka implementation hai under the hood
    list<int>l1;
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(60);
    l1.push_back(70);
    l1.push_front(15);

    //cout<<l1.front()<<" "<<l1.back()<<endl;

    l1.pop_back();
    l1.pop_front();

    //cout<<l1.front()<<" "<<l1.back()<<endl;

    for(auto it: l1){
        cout<<it<<endl;
    }

    for(auto it = l1.begin(); it!= l1.end(); it++){
        cout<<*it<<" ";
    }
    

    return 0;
}