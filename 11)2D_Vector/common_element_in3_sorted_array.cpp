#include<iostream>
using namespace std;
int main()
    {
        int a[6] = {1, 5, 10, 20, 40, 80};
        int b[5] = {6, 7, 20, 80, 100};
        int c[8] = {3, 4, 15, 20, 30, 70, 80, 120};

        int i,j,k;
        i=j=k=0;
        while(i<6 && j<5 && k<8)
            {
                if(a[i]==b[j]&& b[j]==c[k])
                    {
                        cout<<a[i]<<endl;
                        i++;
                        j++;
                        k++;
                    }
                else if (a[i] < b[j])
                    {
                        i++;
                    }
                else if (b[j]<c[k])
                    {
                        j++;
                    }
                else
                    {
                        k++;
                    }
            }
    }