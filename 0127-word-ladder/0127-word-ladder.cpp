class Solution {
public:
    int diff(string a, string b){
        int count = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                count++;
            }
        }
        return count;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        unordered_map<string, vector<string>> adjList;
        unordered_map<string, bool> visited;
        queue<string>q;
        visited[beginWord] = true;
        q.push(beginWord);
        int ans = 1;
        bool found = false;

        for(auto word : wordList){
            if(word == endWord){
            found = true;
            break;
            }
        }
        if(!found){
            return 0;
        }

        for(int i = 0; i < n; i++){
            if(diff(beginWord, wordList[i]) == 1){
                adjList[beginWord].push_back(wordList[i]);
                adjList[wordList[i]].push_back(beginWord);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(diff(wordList[i], wordList[j]) == 1){
                    adjList[wordList[i]].push_back(wordList[j]);
                    adjList[wordList[j]].push_back(wordList[i]);
                }
            }
        }
        while(!q.empty()){
            int size = q.size();
            while(size--){
                string frontNode = q.front();
                q.pop();
                if(frontNode == endWord){
                    return ans;
                }
                for(auto nbr: adjList[frontNode]){
                    if(!visited[nbr]){
                        visited[nbr] = true;
                        q.push(nbr);
                    }
                }
            }
            ans++;
        }
        return 0;
    }
};