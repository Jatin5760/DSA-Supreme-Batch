class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size() / 2;
        int removed_ele = 0;
        int ans = 0;
        unordered_map<int, int>mp;
        priority_queue<int>pq;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            pq.push(i.second);
        }
        while(!pq.empty()){
            if(removed_ele >= n){
                return ans;
            }
            removed_ele += pq.top();
            ans++;
            pq.pop();
        }
        return ans;
    }
};