class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, unordered_map<int, bool>& visited, int u){
        visited[u] = true;
        for(int v = 0; v < isConnected.size(); v++){
            if(!visited[v] && isConnected[u][v] == 1){
                dfs(isConnected, visited, v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int, bool> visited;
        int ans = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                count++;
                dfs(isConnected, visited, i);
            }
        }
        return count;
    }
};