#include<iostream>
using namespace std;
int climb(int n){
    //Base conditions
    if(n == 0 || n == 1){
        return 1;
    }
    
    int ans = climb(n-1)+climb(n-2);
    return ans;
}
int main()
    {
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;

        int ans = climb(n);
        cout<<"Answer is: "<<ans<<endl;

        return 0;
    }