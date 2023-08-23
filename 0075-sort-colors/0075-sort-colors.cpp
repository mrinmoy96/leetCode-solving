class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());  this is also a solution
        int n=nums.size();
        int k=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                int temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
                k++;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                int temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
                k++;
            }
        }
        while(k<n){
            nums[k]=2;
            k++;
        }
    }
};