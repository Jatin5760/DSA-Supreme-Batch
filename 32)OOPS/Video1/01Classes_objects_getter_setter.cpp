#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int age, roll_number;
    string grade;


    // Function Getter and setter
    // Setter
    public:
    void setname(string s){
        if(s.size() == 0){
            cout<<"Invalid name"<<endl;
            return;
        }
        name = s;
    }
    void setage(int s){

        if(age > 100 || age < 0){
            cout<<"Invalid age"<<endl;
            return;
        }
        age = s;
    }

    void setroll_number(int s){
        roll_number = s;
    }

    void setgrade(string s){

        grade = s;
    }

    // Getter
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }

    string getgrade(int pin){
        if(pin == 123){
            return grade;
        }

        return "Fuck off";
    }


};

int main(){
    Student S1;
    // S1.name = "Jatin";
    // S1.age = 21;
    // S1.roll_number = 50;
    // S1.grade = "A+";

    // Student S2;
    // S2.name = "Jayant";
    // S2.age = 19;
    // S2.roll_number = 51;
    // S2.grade = "A+";


    // cout<<S1.name<<endl;
    // cout<<S2.name<<endl;

    S1.setname("");
    S1.setage(-2);
    S1.setroll_number(50);
    S1.setgrade("A+");

    S1.getname();
    //S1.getage();

    cout<<S1.getgrade(125)<<endl;

    

}