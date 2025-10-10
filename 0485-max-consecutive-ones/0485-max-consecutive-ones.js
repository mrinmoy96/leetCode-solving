/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let maxVal=0;
    let currVal=0;

    for(let num of nums){
        if(num===1){
            currVal++;
            maxVal=Math.max(maxVal, currVal);
        }
        if(num==0){
            currVal=0;
        }
    }
    return maxVal;
};