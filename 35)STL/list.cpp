#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // ye doubly linkedlist ka implementation hai under the hood
    list<int>l1;

    // 15 20 30 40 50 60 70 
    // l.end() 70 ke baad wale ko print karega that is why for loop mai it!=l.end() likha hai hamne.
    // l.rbegin() - 70 ko point karega.
    // l.rend() - 15 ke phele wale ko point karega
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
    cout<<endl;

    for(auto it = l1.rbegin(); it!=l1.rend(); it++){
        cout<<*it<<" ";
    }
    

    return 0;
}