class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>>adjList(n);
        vector<int>indegree(n, 0);
        vector<int>CT(n, 0);
        queue<int>q;
        for(auto edge: relations){
            int u = edge[0] - 1;
            int v = edge[1] - 1;
            adjList[u].push_back(v);
            indegree[v]++;
        }
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr: adjList[frontNode]){
                indegree[nbr]--;
                CT[nbr] = max( CT[nbr], CT[frontNode] + time[frontNode]);
                if(indegree[nbr] == 0){
                    q.push(nbr);
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans , CT[i]+time[i]);
        }
        return ans;
    }
};