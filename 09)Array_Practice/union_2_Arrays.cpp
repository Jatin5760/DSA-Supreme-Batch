#include<iostream>
#include<vector>
using namespace std;

void unionOfArray(int arr[], int brr[], int n, int m)
    {
        vector<int> ans;

        for(int i = 0; i<n;i++)
            {
                ans.push_back(arr[i]);
            }
        
        for(int i = 0; i<m; i++)
            {
                ans.push_back(brr[i]);
            }

        // printing 
        for(int i = 0; i<n+m; i++)
            {
                cout<< ans[i]<<" ";
            }

            cout<<endl;
    }
int main()
    {
        int arr[] = {1,3,5,7,9};
        int n = 5;
        int brr[] = {2,4,6,8};
        int m = 4;

        unionOfArray(arr,brr,5,4);


        return 0;
    }