/*
    O(n^2) time complexity and space O(n)

class Solution {
public:
int winner(vector<bool>& person,int n, int index, int person_left, int k)
    {
        // Base case
        if(person_left == 1)
            {
                for(int i = 0; i<n; i++)
                    {
                        if(person[i] == 0)
                            {
                                return i;
                            }
                    }
            }

        int kill = (k - 1) % person_left;
        while(kill--)
            {
                index = (index + 1) % n;
                while(person[index] == 1)
                    {
                        index = (index + 1) % n;
                    }
            }
        person[index] = 1;

        while(person[index] == 1)
            {
                index = (index + 1) % n;
            }

        return winner(person,n,index,person_left - 1,k);
    }

    int findTheWinner(int n, int k) {

        vector<bool>person(n,0);

        return winner(person,n,0,n,k) + 1;
        
    }
};

*/



// O(n) time complexity
/*

    int winner(int n, int k)
    {
        if(n == 0)
        {
            return 0;
        }

        return (winner(n - 1, k) + k)%n;
    }

    int findTheWinner(int n, int k) {
    
        return winner(n,k) + 1;   
    }
*/