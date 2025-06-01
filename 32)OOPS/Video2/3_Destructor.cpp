#include <iostream>
using namespace std;

// It is an instance member function that is invoked automatically whenever an object is going to be destroyed.
class Customer
{
    string name;
    int *balance; // Ye pointer hai isme ham dynamic memory allocation karwa rahe hai.

public:
    // Customer()
    // {
    //     name = "Jatin";
    //     balance = new int;
    //     *balance = 1000;
    //     cout << "Constructor was called" << endl;
    // }


    Customer(){
        name = "4";
        cout<<name<<endl;
    }

    Customer(string name){
        this->name = name;
        cout<<name<<endl;
    }

    // Destructor
    // ~Customer()
    // {
    //     delete balance;
    //     cout << "Destructor is called" << endl;
    // }


    ~Customer(){
        cout<<name<<endl;
    }

    // Constructor order wise call hote hai but destructor reverse order mai call hoga
};

int main()
{
    Customer A1("1"), A2("2"), A3("3");
    Customer *A4 = new Customer;

    delete A4;


    return 0;
}