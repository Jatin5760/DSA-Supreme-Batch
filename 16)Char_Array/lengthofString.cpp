#include<iostream>
using namespace std;

int getLength(char arr[])
    {
        int length = 0;
        int i = 0;

        while(arr[i] != '\0')
            {
                length++;
                i++;
            }

        return length;
    }

int main()
    {
        char arr[100];
        cout<<"Enter the char array: "<<endl;
        cin.getline(arr,50);

        int ans = getLength(arr);
        cout<<"Lenght of string is : "<<ans<<endl;

        cout<<"Lenght is : "<<strlen(arr)<<endl;

    }