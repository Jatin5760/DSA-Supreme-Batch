class Solution {
public:
    bool solve(vector<vector<int>>& adjList,vector<bool>&visited, int source, int destination){
        visited[source] = 1;
        if(source == destination){
            return 1;
        }
        for(auto nbr: adjList[source]){
            if(!visited[nbr]){
                if(solve(adjList,visited, nbr, destination)){
                    return 1;
                }
            }
        }
        return 0;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adjList(n);
        vector<bool>visited(adjList.size(), 0);
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        if(solve(adjList, visited, source, destination)){
            return 1;
        }
        return 0;
    }
};