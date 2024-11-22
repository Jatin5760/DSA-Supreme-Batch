// This is two pointer approach.
/*

#include<iostream>
using namespace std;
int main()
    {
        int arr[13] = {12,16,22,30,35,39,42,45,48,50,53,55,56};
        int size = 13;
        int x = 35;
        int k = 4;
       
       int l = 0;
       int h = size - 1;
       while(h-l>=k)
            {
                if(x - arr[l]>arr[h]-x)
                    {
                        l++;
                    }
                else
                    {
                        h--;
                    }
            }
        vector<int> ans;

        for(int i = l; i<=h; i++)
            {
                ans.push_back(arr[i]);
            }
        
        for(int i = 0; i<ans.size();i++)
            {
                cout<<ans[i]<<",";
            }
    }

*/