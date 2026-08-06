class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> answer(nums.size());
        int i=0;
        int high=0;
        while(high < nums.size() && nums[high]<0){
            high++;
        }
        int low=high - 1; 
        while(low>=0 && high < nums.size()){
           if(pow(nums[low],2)<pow(nums[high],2)){
            answer[i]=pow(nums[low],2);
            low--;
            i++;
           }
           else{
            answer[i]=pow(nums[high],2);
            high++;
            i++;
           }
        }
        while(low >= 0){
            answer[i] = pow(nums[low],2);
            low--;
            i++;
        }
        while(high<=nums.size()-1){
            answer[i]=pow(nums[high],2);
            high++;
            i++;
        }
        return answer;
    }
};