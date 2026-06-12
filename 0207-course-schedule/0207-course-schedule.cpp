class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int N = numCourses;
        vector<int>inDegree(N, 0);
        vector<vector<int>>adjList(N);
        queue<int>q;
        int count = 0;
        for(auto edge: prerequisites){
            int u = edge[0];
            int v = edge[1];
            adjList[u].push_back(v);
            inDegree[v]++;
        }
        for(int i = 0; i < N; i++){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            count++;
            for(auto nbr: adjList[frontNode]){
                inDegree[nbr]--;
                if(inDegree[nbr] == 0){
                    q.push(nbr);
                }
            }
        }
        if(count!=N)return false;
        return true;
    }
};