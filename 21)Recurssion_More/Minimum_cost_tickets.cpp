#include<iostream>
using namespace std;
int minCost(int days[], int cost[], int i, int sizeDays)
    {
        //Base case
        if(i >= sizeDays)
            {
                return 0;
            }
        // Solution for 1 case

        // 1 day pass taken
        int cost1 = cost[0] + minCost(days, cost, i + 1, sizeDays);

        // 7 day pass taken
        int passEndDay = days[i] + 7 - 1;
        int j = i;
        while(j < sizeDays && days[j]<= passEndDay)
            {
                j++;
            }
        int cost7 = cost[1] + minCost(days, cost, j, sizeDays);

        // 30 Days pass taken
        passEndDay = days[i] + 30 - 1;
        j = i;
        while(j < sizeDays && days[j]<= passEndDay)
            {
                j++;
            }
        int cost30 = cost[2] + minCost(days, cost, j, sizeDays);

    return min(cost1, min(cost7, cost30));
    }
int main()
    {
        int days[] = {1,4,6,7,8,20};
        int sizeDays = 6;
        int cost[] = {2,7,15};

        int ans = minCost(days, cost, 0, sizeDays);
        cout<<"Answer is: "<<ans<<endl;


        return 0;
    }