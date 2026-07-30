class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       vector<int> ans(n);
       int pre=1;
       for(int i=0;i<n;i++){
        ans[i]=pre;
        pre=nums[i]*pre;
       }
       int post=1;
       for(int i=n-1;i>=0;i--){
        ans[i]=post*ans[i];
        post=nums[i]*post;
       }
        return ans;
    }
};