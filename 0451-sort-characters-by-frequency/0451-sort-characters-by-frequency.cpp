struct cmp {
    bool operator()(pair<int,char>& a, pair<int,char>& b){
        if(a.first == b.first){
            return a.second < b.second;
        }
        return a.first < b.first;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>, vector<pair<int,char>>, cmp> pq;
        for(auto i: mp){
            int ele = i.first;
            int freq = i.second;
            pq.push({freq, ele});
        }
        string ans = "";
        while(!pq.empty()){
            pair<int, char> curr = pq.top();
            while(curr.first--){
                ans.push_back(curr.second);
            }
            pq.pop();
        }
        return ans;
    }
};