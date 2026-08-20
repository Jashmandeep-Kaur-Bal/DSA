class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            right=sum-left-nums[i];
            if(right==left) return i;
            left+=nums[i];
        }
        return -1;
        
    }
};