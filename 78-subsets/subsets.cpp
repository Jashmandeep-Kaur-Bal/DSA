class Solution {
public:
    void solve(vector<int> nums, int index, vector<int> subset, vector<vector<int>> &ans){
        if(index==nums.size()){
            ans.push_back(subset);
            return;
        }
        //inclusion
        subset.push_back(nums[index]);
        solve(nums, index+1, subset, ans);
        //exclusion
        subset.pop_back();
        solve(nums, index+1, subset, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> subset;
            solve(nums, 0, subset, ans);
            return ans;
            }

        
        
    
};