class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Ensure mid is even for comparison with mid+1
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                // The single element is in the right half
                left = mid + 2;
            } else {
                // The single element is in the left half (including mid)
                right = mid;
            }
        }

        return nums[left]; 
    }
};