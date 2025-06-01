#include <iostream>
using namespace std;

class Customer
{

    string name;
    int account_number;
    int balance;

    // Yaha par hamne 3 constructor create kiya hai jinka naam same hai but parameters alag hai.
    // Toh isko kehte hai constructor overloading.

public:
    // Default constructor
    Customer()
    {
        // cout<<"Constructor called"<<endl;
        name = "Jatin";
        account_number = 50;
        balance = 100;
    }

    // Customer(string a,int b , int c){
    //     name = a;
    //     account_number = b;
    //     balance = c;
    // }

    // Here hamne this keyword ka use kiya.
    // Customer(string name, int account_number, int balance){
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }

    Customer(string a, int b)
    {
        name = a;
        account_number = b;
        balance = 69;
    }

    // Inline constructor
    inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c)
    {
        
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};
int main()
{

    Customer A1;
    A1.display();

    Customer A2("Jayant", 51, 105);
    A2.display();

    Customer A3("Nupur", 49);
    A3.display();

    return 0;
}