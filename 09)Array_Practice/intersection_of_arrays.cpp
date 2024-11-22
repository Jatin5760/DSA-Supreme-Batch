#include<iostream>
#include<vector>
using namespace std;

void intersection(int arr[], int brr[], int n, int m)
    {
        vector<int> ans;
        int first = 0;
        for(int i = 0; i<n; i++)
            {
                if(arr[i] == brr[first])
                    {
                        ans.push_back(arr[i]);
                        first++;
                    }

            }

        for(int i = 0; i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
    }
int main()
    {
        int arr[] = {1,2,3,4,9,8};
        int n = 6;
        int brr[] = {3,4,9,10};
        int m = 4;

        intersection(arr,brr,6,4);


        return 0;

    }