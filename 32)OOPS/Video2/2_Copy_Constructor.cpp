#include <iostream>
using namespace std;

class Customer
{

    string name;
    int account_number;
    int balance;


    // Constructor
    public:
    Customer(string a, int b, int c){
        name = a;
        account_number = b;
        balance = c;
    }

    // Copy contructor kudh se banaya hai niche
    Customer (Customer &B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    Customer A1("Jatin", 50, 1000);
    A1.display();

    Customer A2(A1); // Copy Constructor by default banta hai.
    A2.display();


    Customer A3(A2);
    A3.display();




    return 0;
}