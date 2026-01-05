class Solution {
  public:
    void printNum(int i, int N){
        if(i < 1){
            return;
        }
        cout<< i << " ";
        printNum(i - 1, N);
    }
    void printNos(int N) {
        // code here
        printNum(N, N);
    }
};