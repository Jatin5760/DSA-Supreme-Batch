class Solution {
    vector<pair<int, int>> track;
    priority_queue<int, vector<int>, greater<int>>pq;
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long long ans = 0;
        long long mod = 1000000007;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            track.push_back({efficiency[i], speed[i]});
        }
        sort(track.rbegin(), track.rend());

        for(int i = 0; i < track.size(); i++){
            pair<int, int> curr = track[i];
            int eff = curr.first;
            int s = curr.second;
            pq.push(s);
            sum += s;

            if(pq.size() > k){
                sum -= pq.top();
                pq.pop();
            }
            ans = max(ans, (long long)sum * eff);
        }
        return ans % mod;
    }
};