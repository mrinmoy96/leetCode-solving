/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = new Map(); // value -> index

    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        if (map.has(complement)) {
            let idx1 = map.get(complement);
            let idx2 = i;
            if (idx1 > idx2) [idx1, idx2] = [idx2, idx1]; // ensure increasing order
            return [idx1, idx2];
        }
        map.set(nums[i], i); // store index of current value
    }
    
    return [];
};