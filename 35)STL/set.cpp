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

    return 0;
}