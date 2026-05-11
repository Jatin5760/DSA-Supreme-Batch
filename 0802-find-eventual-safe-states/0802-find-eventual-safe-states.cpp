class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<vector<int>>adjList(graph.size());
        vector<int>outdeg(graph.size(), 0);
        queue<int>q;
        vector<int>ans;
        for(int u = 0; u < graph.size(); u++){
            for(auto v: graph[u]){
                adjList[v].push_back(u);
                outdeg[u]++;
            }
        }

        for(int i = 0; i < outdeg.size(); i++){
            if(outdeg[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(auto nbr: adjList[node]){
                outdeg[nbr]--;
                if(outdeg[nbr] == 0){
                    q.push(nbr);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};