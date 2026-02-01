class Solution {
  public:
    bool safe(vector<vector<int>>& maze, vector<vector<bool>>& visited,int newx, int newy){
        if((newx >=0 && newx< maze.size()) && (newy>=0 && newy <maze[0].size()) && maze[newx][newy] == 1 && visited[newx][newy] == false){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>>& maze, vector<vector<bool>>& visited, vector<string>& ans, int srx, int sry, int desx, int desy, string temp){
        if(srx == desx && sry == desy){
            ans.push_back(temp);
            return;
        }
        
        // Down
        int newx = srx + 1;
        int newy = sry;
        if(safe(maze, visited, newx, newy)){
            visited[newx][newy] = true;
            solve(maze, visited, ans, newx, newy, desx, desy, temp + 'D');
            visited[newx][newy] = false;
        }
        
        
        // Left
        newx = srx;
        newy = sry-1;
        if(safe(maze, visited, newx, newy)){
            visited[newx][newy] = true;
            solve(maze, visited, ans, newx, newy, desx, desy, temp + 'L');
            visited[newx][newy] = false;
        }
        
        // Right
        
        newx = srx;
        newy = sry+1;
        if(safe(maze, visited, newx, newy)){
            visited[newx][newy] = true;
            solve(maze, visited, ans, newx, newy, desx, desy, temp + 'R');
            visited[newx][newy] = false;
        }
        
        
        // Up
        newx = srx - 1;
        newy = sry;
        if(safe(maze, visited, newx, newy)){
            visited[newx][newy] = true;
            solve(maze, visited, ans, newx, newy, desx, desy, temp + 'U');
            visited[newx][newy] = false;
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n = maze.size();
        int m = maze[0].size();
        vector<string>ans;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        string temp = "";
        int srx = 0;
        int sry = 0;
        int desx = n - 1;
        int desy = m - 1;
        
        visited[0][0] = true;
        
        if (maze[0][0] == 0 || maze[n-1][m-1] == 0)return {};

        solve(maze, visited, ans, srx, sry, desx, desy, temp);
        
        return ans;
        
    }
};