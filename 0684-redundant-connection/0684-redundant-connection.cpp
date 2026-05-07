class Solution {
public:
    bool solve(vector<vector<int>>&adjList, vector<bool>visited, int source, int dest){
        visited[source] = 1;
        if(source == dest){
            return 1;
        }
        for(auto nbr: adjList[source]){
            if(!visited[nbr]){
                if(solve(adjList, visited, nbr, dest)){
                    return 1;
                }
            }
        }
        return 0;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>>adjList(n + 1);
        vector<bool>visited(n + 1, 0);
        vector<int>ans;
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            if(solve(adjList, visited, u, v)){
                return edge;
            }
            else{
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
        }
        return ans;
    }
};