#include<iostream>
using namespace std;

class Animal{

    public:

    // This is pure virtual function yani ek abstract class hai.
    // Iska koi bhi object create nhi hoga.
    virtual void speak() = 0;

};

class Dog: public Animal{

    public:

    void speak(){
        cout<<"Bark"<<endl;
    }
    
};

class Cat: public Animal{

    public:

    void speak(){
        cout<<"Meow"<<endl;
    }

};

int main(){

    // Animal *p;
    // p = new Dog();
    // p->speak();

    Animal *p;
    vector<Animal*>Animals;

        Animals.push_back(new Dog());
        Animals.push_back(new Cat());
        //Animals.push_back(new Animal());
        Animals.push_back(new Dog());
        Animals.push_back(new Cat());

        for(int i = 0; i<Animals.size(); i++){
            p = Animals[i];
            p->speak();
        }

    return 0;
}