class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjList(numCourses);
        vector<int>indegree(numCourses, 0);
        vector<int>ans;
        queue<int>q;
        for(auto ele: prerequisites){
            int u = ele[0];
            int v = ele[1];

            adjList[v].push_back(u);
            indegree[u]++;
        }

        for(int i = 0; i < indegree.size(); i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for(auto nbr: adjList[node]){
                indegree[nbr]--;
                if(indegree[nbr] == 0){
                    q.push(nbr);
                }
            }
        }

        if(ans.size() < numCourses){
            return {};
        }
        return ans;
    }
};