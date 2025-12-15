class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>val;
        unordered_map<int, int>mp;
        int n=nums.size();

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second > n/3){
                val.push_back(it.first);
            }
        }
        return val;
    }
};