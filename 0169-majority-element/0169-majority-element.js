/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
     const freqMap = new Map();

    // Count frequency
    nums.forEach(num => {
        freqMap.set(num, (freqMap.get(num) || 0) + 1);
    });

    // Find majority element
    let result = -1;
    freqMap.forEach((count, num) => {
        if (count > nums.length / 2) {
            result = num;
        }
    });

    return result;
    
};