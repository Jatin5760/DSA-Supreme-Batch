class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int>mp;
        priority_queue<int, vector<int>, greater<int> >pq;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            pq.push(i.second);
        }
        while(!pq.empty()){
           if(k >= pq.top()){
                k -= pq.top();
                pq.pop();
           }
           else{
                break;
           }
        }
        return pq.size();
    }
};