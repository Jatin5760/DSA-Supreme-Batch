class Solution {
  public:
  bool check(string& s, int start, int end){
    if(start >= end+1/2)return true;
    if(s[start]!=s[end]){
        return false;
    }
    
    return check(s, start+1, end-1);
    
  }
    bool isPalindrome(string& s) {
        // code here
        int start = 0;
        int end = s.size() - 1;
        return check(s, start, end);
    }
};