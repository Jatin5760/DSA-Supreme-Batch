class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        int rsum = 0;
        int max_sum = 0;
        int rindex = cardPoints.size() - 1;

        for(int i = 0; i < k; i++){
            lsum = cardPoints[i] + lsum;
        }
        max_sum = lsum;


        for(int i = k - 1; i >=0; i--){
            lsum = lsum - cardPoints[i];
            rsum = cardPoints[rindex] + rsum;
            rindex--;
            max_sum = max(max_sum, lsum + rsum);
        }
        return max_sum;
    }
};