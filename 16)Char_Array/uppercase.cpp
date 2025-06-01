#include<iostream>
using namespace std;
void upperCase(char arr[], int size)
    {
        
        for(int i = 0; i<size; i++)
            {
                arr[i] = char((int)arr[i] - 97 + 65);
            }
    }
int main()
    {
        char arr[100];
        cout<<"Enter the string: "<<endl;
        cin.getline(arr,60);

        int size = strlen(arr);

        upperCase(arr,size);

        for(int i = 0; i<size; i++)
            {
                cout<<arr[i];
            }

        cout<<endl;

        return 0;
    }