class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0;
        int currCount=0;

        for(int num:nums){
            if(num==1){
                currCount++;
                maxCount=max(maxCount, currCount);
            }
            if(num==0){
                currCount=0;
            }
        }
        return maxCount;
    }
};