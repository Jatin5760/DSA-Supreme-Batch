#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& temp, vector<vector<int> >& result) {
    if (temp.size() == nums.size()) {
        result.push_back(temp);
        return;
    }
    
    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

        used[i] = true;
        temp.push_back(nums[i]);

        backtrack(nums, used, temp, result);

        temp.pop_back();
        used[i] = false;
    }
}

vector<vector<int> > permuteUnique(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int> > result;
    vector<int> temp;
    vector<bool> used(nums.size(), false);

    backtrack(nums, used, temp, result);
    return result;
}

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);

    vector<vector<int> > permutations = permuteUnique(nums);

    for (vector<int>& perm : permutations) {
        for (vector<int>::iterator num = perm.begin(); num != perm.end(); ++num) {
            cout << *num << " ";
        }
        cout << endl;
    }
    return 0;
}




/*
class Solution {
public:
void permute(vector<int>& nums, vector<vector<int> >& ans, int index)
    {
        if(index == nums.size())
            {
                ans.push_back(nums);
                return;
            }
        
        vector<bool> use (21,0);
        for(int i = index; i< nums.size(); i++)
            {
                if(use[nums[i] + 10] == 0)
                    {
                        swap(nums[index], nums[i]);
                        permute(nums,ans,index + 1);
                        swap(nums[index], nums[i]);
                        use[nums[i] + 10] = 1;
                    }
            }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> > ans;
        int index = 0;
        permute(nums,ans,index);

        return ans;
        
    }
};
*/
