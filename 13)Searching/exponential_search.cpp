#include<iostream>
using namespace std;
int bs(int a[], int start, int end, int x)
    {
        int mid = start + (end - start) / 2;
        while(start <= end)
            {
                if(a[mid] == x)
                    {
                        return mid;
                    }
                else if(a[mid] > x)
                    {
                        end = mid - 1;
                    }
                else
                    {
                        start = mid + 1;
                    }
                mid = start + (end - start) / 2;
            }
        return mid;
    }

int expSearch(int a[], int size, int x)
    {
        if(a[0] == x) return 0;

        int i = 1;

        while(i<size && a[i] <= x)
            {
                i = i * 2;
            }
        
        return bs(a, i/2, min(i,size-1), x);
    }

int main()
    {
        int a[] = {3,4,5,6,11,13,14,15,56,70};
        int size = 10;
        int x = 13;

        int ans = expSearch(a,size,x);

        cout<<"Index of target:"<<ans<<endl;

        return 0;
    }