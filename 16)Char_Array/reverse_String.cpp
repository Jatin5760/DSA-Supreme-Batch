#include<iostream>
using namespace std;
void reverseString(char arr[], int size)
    {
        int i = 0;
        int j = size - 1;

        while(i<=j)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }

    }
int main()
    {
        char arr[100];
        int size = 12;
        cout<<"Enter the character in Array: "<<endl;
        cin.getline(arr,50);

        reverseString(arr, size);

        cout<<"Ans is : "<<arr<<endl;
        
    }