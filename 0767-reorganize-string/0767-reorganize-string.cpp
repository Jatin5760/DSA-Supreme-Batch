struct cmp {
    bool operator()(pair<int, char>& a, pair<int, char>& b){
        if(a.first != b.first){
            return a.first < b.first;
        }
        return a.second < b.second;
    }
};
class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int, char>, vector<pair<int, char>>, cmp>pq;
        unordered_map<char, int>mp;
        string ans = "";
        int seats = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }

        for(auto i : mp){
            char element = i.first;
            int freq = i.second;
            pair<int, char> curr= {freq, element};
            pq.push(curr);
        }

        while(!pq.empty()){
            pair<int, char> p = pq.top();
            pq.pop();

            if(seats == 0 || ans[seats-1] != p.second){
                ans.push_back(p.second);
                seats++;
                p.first--;
                if(p.first > 0){
                    pq.push(p);
                }
            }
            else{
                if(pq.empty()){
                    return "";
                }
                else{
                    pair<int, char> secondEle = pq.top();
                    pq.pop();
                    ans.push_back(secondEle.second);
                    seats++;
                    secondEle.first--;
                    if(secondEle.first > 0){
                        pq.push(secondEle);
                    }
                    pq.push(p);
                }
            }
        }
        return ans;
    }
};