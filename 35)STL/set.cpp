#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
        int age;
        string name; 

    bool operator < (const Person &other) const{
        return age < other.age;
    }
};

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

    // find - returns the iterator of that number 
    if(s.find(20) !=s.end()){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    // count returns the count of the number
    if(s.count(200)){
        cout<<"Present\n";
    }
    else{
        cout<<"Absent\n";
    }


    set<Person>s2;
    Person p1, p2, p3;
    p1.age = 10, p1.name = "Jatin";
    p2.age = 30, p2.name = "Lol";
    p3.age = 40, p3.name = "Lol2";

    s2.insert(p1);
    s2.insert(p2);
    s2.insert(p3);
    s2.erase(p3);

    for(auto it =  s2.begin(); it!= s2.end(); it++){
        cout<<(*it).age<<" "<<(*it).name<<endl;
    }


    return 0;
}