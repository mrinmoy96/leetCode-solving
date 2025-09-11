/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let maxSum=nums[0];
    let currSum=0;

    for(let num of nums){
        currSum+=num;
        maxSum=Math.max(currSum, maxSum);

        if(currSum < 0){
            currSum=0;
        }
    }
    return maxSum;

};