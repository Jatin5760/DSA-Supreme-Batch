#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int age, roll_number;
    string grade;
};

int main(){
    // Dynamic object se Dynamic memory allocation.
    Student *S = new Student;
    (*S).name = "Jatin";
    (*S).age = 21;
    (*S).roll_number = 50;
    (*S).grade = "A+";


    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->roll_number<<endl;
    cout<<S->grade<<endl;
}