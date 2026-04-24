class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i = 0; i < stones.size(); i++){
            pq.push(stones[i]);
        }


        while(pq.size() > 1){
            int firstEle = pq.top();
            pq.pop();
            int secondEle = pq.top();
            pq.pop();
            int diff = abs(firstEle - secondEle);
            pq.push(diff);
        }

        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};