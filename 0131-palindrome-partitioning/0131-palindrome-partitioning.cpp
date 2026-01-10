class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(start<=end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void PPartition(int index, string s, vector<string>& temp, vector<vector<string>>& ans){
        // Base Case
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }

        for(int i = index; i < s.size(); i++){
            if(isPalindrome(s, index, i)){
                temp.push_back(s.substr(index, i-index+1));
                PPartition(i + 1, s, temp, ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        PPartition(0, s, temp, ans);
        return ans;
    }
};