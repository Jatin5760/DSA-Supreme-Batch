#include<iostream>
using namespace std;

char getGrade(int x)
    {
        if(x>=90)
            {
                return 'A';
            }
        else if(x>=80)
            {
                return 'B';
            }
        else if(x>=70)
            {
                return 'C';
            }
        else if(x>=60)
            {
                return 'D';
            }
        else
            {
                return 'E';
            }
    }
int main()
    {
        int x;
        cout<<"Enter the x of student"<<endl;
        cin>>x;

        char grade = getGrade(x);
        cout<<"Your grade is: "<<grade<<endl;
    }