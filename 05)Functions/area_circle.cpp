#include<iostream>
using namespace std;
float areaCircle(float r)
    {
        float circlearea = 3.14159*r * r;
        return circlearea;
    }
int main()
    {
        float r;
        cout<<"Enter the radius: "<<endl;
        cin>>r;

        float area = areaCircle(r);

        cout<<area;
    }