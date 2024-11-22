// Isme ham Negative marking method ka use kar rahe hai.
#include<iostream>
using namespace std;
int main()
    {
        int arr[6] = {1, 3, 4, 2, 2};
        int size = 6;

        int ans = -1;

        for(int i = 0; i<size; i++)
            {
                int index = abs(arr[i]);


                // Already visited
                if(arr[index]<0)
                    {
                        ans = index;
                        break;
                    }

                // Visited Mark
                arr[index] *= - 1;   
            }
             
            cout<<ans;


        
    }