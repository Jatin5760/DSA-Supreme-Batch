#include<iostream>
using namespace std;

class Student{
    public:
    string name;

    void setname(string s){
        name = s;
    }

    // Function declaration inside the class
    string getname();
};

// Function / method outside the class with scope resolution operator.
string Student :: getname(){
    return name;
}

int main(){
    Student S1;
    S1.setname("Jatin");

    cout<<S1.getname()<<endl;
}