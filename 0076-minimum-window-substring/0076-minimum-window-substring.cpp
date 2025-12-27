class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>hash(256 , 0);
        int low = 0;
        int high = 0;
        int count = 0;
        int min_length = INT_MAX;
        int start = -1;

        for(int i = 0; i < t.size(); i++){
            hash[(unsigned char)t[i]]++;
        }
        for(int high = 0; high < s.size(); high++){
            if(hash[(unsigned char)s[high]] > 0){
                count++;
            }
            hash[s[high]]--;
            while(count == t.size()){
                int len = high - low + 1;
                if(len < min_length){
                    min_length = len;
                    start = low;
                }
                hash[(unsigned char)s[low]]++;
                if(hash[(unsigned char)s[low]] > 0){
                    count--;
                }
                low++;
            }
        }
        return start == -1 ? "":s.substr(start, min_length);
    }
};