#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> p; // max heap
    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);
    
    cout<<p.top()<<" ";

    // Delete 
    p.pop();
    cout<<p.top()<<endl;

    // Size
    cout<<p.size()<<endl;

    // Printing the PQ
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }


    // Min heap creating with priority queue
    priority_queue<int, vector<int>, greater<int> > p1;

    // Rest all operations will be same as above

    return 0;
}