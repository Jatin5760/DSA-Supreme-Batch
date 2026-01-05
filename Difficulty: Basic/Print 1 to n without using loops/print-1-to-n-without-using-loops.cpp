class Solution {
  public:
    void printNum(int i, int n){
        // Base case
        if(i > n){
            return;
        }
        
        cout<< i <<" ";
        printNum(i + 1, n);
    }
    void printTillN(int n) {
        // code here
        printNum(1, n);
        
    }
};