#include<iostream>
using namespace std;
void maxProfitFinder(int arr[], int i, int& minPrice, int& maxProfit, int size)
    {
        //Base case
        if(i==size)
            {
                return;
            }

        //One case
        if(arr[i] < minPrice)
            {
                minPrice = arr[i];
            }
        int todaysProfit = arr[i] - minPrice;

        if(todaysProfit > maxProfit)
            {
                maxProfit = todaysProfit;
            }

        //RE
        maxProfitFinder(arr, i+1, minPrice, maxProfit, size);
    }
int main()
    {
        int arr[] = {7,1,5,3,6,4};
        int size = 6;
        int i = 0;
        int maxProfit = INT_MIN;
        int minPrice = INT_MAX;

        maxProfitFinder(arr, i, minPrice, maxProfit, size);

        cout<<maxProfit<<endl;

    }