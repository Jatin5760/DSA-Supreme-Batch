#include<iostream>
using namespace std;
void permut(int arr[],int index, int n, vector<vector<int> >& ans)
    {
        if(index == n)
            {
                vector<int> temp(arr, arr + n);
                ans.push_back(temp);
                return;
            }

        for(int i = index; i<n;i++)
            {
                swap(arr[index], arr[i]);
                permut(arr,index+1,n,ans);
                swap(arr[index], arr[i]);
            }
    }

int main()
    {
        int arr[] = {1,2,3};
        int n = 3;
        int index = 0;
        vector<vector<int> > ans;

        permut(arr,index,n,ans);

        for(int i = 0; i<ans.size(); i++)
            {
                for(int j = 0; j<ans[i].size(); j++)
                    {
                        cout<<ans[i][j]<<" ";
                    }
                cout<<endl;
            }
    }