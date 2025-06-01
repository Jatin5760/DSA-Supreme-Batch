#include<iostream>
using namespace std;

class Employee{

    int id;
    int salary;



    public:

    void setId(){
        salary = 122;
        cout<<"Enter the id of Employee";
        cin>>id;
    }

    void getId(){
        cout<<"The id of this employee is: "<<id<<endl;
    }

};

int main(){

    // Employee jatin, nupur;
    // jatin.setId();
    // jatin.getId();

    // Employee ka number agar bhot jyada hai toh array mai store karlo

    Employee fb[4];
    for(int i = 0; i<4; i++){
        fb[i].setId();
        fb[i].getId();
        
    }

    return 0;
}