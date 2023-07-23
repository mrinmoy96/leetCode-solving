class Solution {
public:
    /*
    double median(vector<int>& ans){
        double medi;
        double sum=0;
        for(int i=0; i<ans.size(); i++){
            sum+=ans[i];
        }
        medi=sum/ans.size();
        return medi;
    }
    */
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>nums2){
        vector<int>v;
    for(int i=0; i<nums1.size(); i++){
        v.push_back(nums1[i]);
    }
    for(int i=0; i<nums2.size(); i++){
        v.push_back(nums2[i]);
    }
    sort(v.begin(), v.end());
   
    int n=v.size();
    if (n % 2 != 0){
        return (double)v[n / 2];
    }
    return (double)(v[(n - 1) / 2] + v[n / 2]) / 2.0;
    }
        
    
};