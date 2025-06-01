#include<iostream>
using namespace std;
bool palindromeOrNot(char arr[], int size)
    {
        int i = 0;
        int j = size - 1;
        
        while(i<=j)
            {
                if(arr[i] == arr[j])
                    {
                        return true;
                        i++;
                        j--;
                    }
                else
                    {
                        return false;
                    }

            }
    return true;  

    }
int main()
    {
        char arr[100];
        cout<<"Enter the string: "<<endl;
        cin.getline(arr,70);

        int size = strlen(arr);

        if(palindromeOrNot(arr,size))
            {
                cout<<"Yes it is palindrome "<<arr<<endl;
            }
        else
            {
                cout<<"Sorry it's not a palindrome "<<arr<<endl;
            }

        return 0;
    }