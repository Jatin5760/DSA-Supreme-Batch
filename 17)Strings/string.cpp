#include<iostream>
#include<string>
using namespace std;
int main()
    {
        // string str;
        // cout<<"Enter the string"<<endl;
        // //cin>>str;

        // getline(cin,str);

        // cout<<"Output is: "<<str<<endl;

        // cout<<"Lenght is: "<<str.length()<<endl;

        // cout<<"is Empty: "<<str.empty()<<endl;

        // str.push_back('@');

        // cout<<"Push back Output is: "<<str<<endl;

        // str.pop_back();

        // cout<<"Pop back Output is: "<<str<<endl;

        // cout<<str.substr(0,6)<<endl;


        // string s1 = "Jatin";
        // string s2 = "jatin";

        // if(s1.compare(s2)== 0)
        //     {
        //         cout<<"s1 and s2 same strings"<<endl;
        //     }
        // else
        //     {
        //         cout<<"both are different string"<<endl;
        //     }


        //     string s3 = "Oh yess god please f me";
        //     string s4 = "god";

        //     int ans = s3.find(s4);
        //     cout<<"Position of s4 in s3 starts at: "<<ans<<endl;


        string s5 = "Jatin Sharma";
        string word = "Nupur";

        s5.replace(0,5,word);
        cout<<s5<<endl;

        s5.erase(0,6);
        cout<<s5<<endl;

        return 0;
    }