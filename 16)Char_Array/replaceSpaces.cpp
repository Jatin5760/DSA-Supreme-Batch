#include<iostream>
using namespace std;
void replaceSpaces(char arr[], int size)
    {
        for(int i = 0; i<size; i++)
            {
                if(arr[i] == ' ')
                    {
                        arr[i] = '@';
                    }
            }
    }
int main()
    {
        char arr[100];
        cout<<"Enter the data in char arr: "<<endl;
        cin.getline(arr, 80);

        int size = strlen(arr);
        
        replaceSpaces(arr, size);

        for(int i = 0; i<size; i++)
            {
                cout<<arr[i];
            }
 

        return 0;
    }