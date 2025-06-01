#include<iostream>
using namespace std;

void Parenthesis(int &n, int left, int right, vector<string>& ans, string temp)
    {
        if(left + right == 2*n)
            {
                ans.push_back(temp);
                return;
            }
        
        // Left Parenthesis
        if(left < n)
            {
                temp.push_back('(');
                Parenthesis(n,left+1,right,ans,temp);
                temp.pop_back();
            }

        // Right Parenthesis
        if(right < left)
            {
                temp.push_back(')');
                Parenthesis(n,left,right+1,ans,temp);
                temp.pop_back();
            }
    }

int main()
    {
        int n;
        cout<<"Enter the number: "<<endl;
        cin>>n;
        cout<<endl;

        vector<string> ans;
        string temp;
        int left = 0;
        int right = 0;

        Parenthesis(n,left,right,ans,temp);

        for(int i = 0; i<ans.size();i++)
            {
                cout<<ans[i]<<endl;
            }

        




        return 0;
    }