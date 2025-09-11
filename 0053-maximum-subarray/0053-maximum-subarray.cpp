class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxSum=nums[0];
       int currSum=0;

       for(int num:nums){
          currSum+=num;
          maxSum=max(maxSum, currSum);
          if(currSum < 0){
            currSum=0;
          }

       } 
       return maxSum;
    }
};