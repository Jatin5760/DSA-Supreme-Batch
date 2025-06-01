/*

int toh(int n, int start, int helper, int destination)
    {
        if (n == 0) 
            {
                return 0;
            }
        
        if(n == 1)
            {
                return 1;
            }
            
       int count = toh(n-1,start,destination,helper);
        
        count++;
        
        count = count + toh(n-1,start,helper,destination);
        
        return count;
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
        return toh(n,from,aux,to);
        
    }

*/