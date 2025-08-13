class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            int comp=target-nums[i];
            if(mpp.find(comp)!=mpp.end()){
                int idx1=mpp[comp];
                int idx2=i;
                if(idx1 > idx2){
                   swap(idx1,idx2);
                }
                return {idx1,idx2};
            }
            mpp[nums[i]]=i;
            
        }
        return {};
        
    }
};