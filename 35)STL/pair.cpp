#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){

    pair<string, int> p;

    // Two methods to make pair

    p = make_pair("Jatin", 22);
    // cout<<p.first<<" "<<p.second<<endl;

    // second method
    // p.first = "Jatin";
    // p.second = 22;


    pair<string,pair<int,int> > p1;
    p1.first = "Jatin";
    p1.second.first = 22;
    p1.second.second = 75;

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    return 0;
}