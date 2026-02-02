class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int, int>mpp;
        // for(int i=0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
            
        // }
        // if(mpp.find(nums[i])!=mpp.end()){
        //       return true;
        // }
        
        // return false;

        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            if (mpp[nums[i]] >= 1) {
                return true;
            }
            mpp[nums[i]]++;
        }
        return false;
    }
};