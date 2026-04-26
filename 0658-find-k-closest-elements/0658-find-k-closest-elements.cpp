struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        if(a.first == b.first)
            return a.second < b.second;   
        return a.first < b.first;       
    }
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++){
            int diff = abs(arr[i] - x);
            int element = arr[i];
            pq.push({diff, element});
            if(pq.size() > k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            pair<int, int> curr = pq.top();
            pq.pop();
            ans.push_back(curr.second);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};