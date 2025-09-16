#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){

    // SET - Stores only unique value
    // Set ki implementation AVL tree se hui hai kyonki waha par bhi sare operations mai O(log n).
    // Ye Red-Black tree se bhi implement kar sakte hai AVL se thoda sa advantage hai kyonki kam roations lagte hai.

    // Store values in sorted order.

    // Serching - O(log n)
    // Insert - O(log n)
    // Delete - O(log n)


    set<int>s;
    s.insert(20);
    s.insert(30);
    s.insert(20); // will not be inserted
    s.insert(40);

    for(auto it: s){
        cout<<it<<" ";
    }

    cout<<endl;

    for(auto it = s.rbegin(); it!=s.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    // We can sort set in decending order using greater<type>s;
    set<int, greater<int> >s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);
    s1.insert(60);

    for(auto it: s1){
        cout<<it<<" ";
    }

    cout<<endl;

    // find
    if(s.find(20) !=s.end()){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    // count
    if(s.count(200)){
        cout<<"Present\n";
    }
    else{
        cout<<"Absent\n";
    }

    return 0;
}