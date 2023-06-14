/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    // TreeNode* check(vector<int>& nums, int i, int j){
    //     if(i>j){
    //         return NULL;
    //     }
    //     int pos=(i+j)/2;
    //     TreeNode* root= new TreeNode(nums[pos]);
    //     root->left=check(nums, i, pos-1);
    //     root->right=check(nums, pos+1, j);

    //     return root;
    // }
    // TreeNode* sortedArrayToBST(vector<int>& nums){
    //     int start=0;
    //     int end=nums.size()-1;

    //     return check(nums, start, end);
    // }
    
    TreeNode* chk(vector<int>& nums, int i, int j){
        if(i>j){
            return NULL;
        }
        int pos=(i+j)/2;
        TreeNode* root=new TreeNode(nums[pos]);
        root->left=chk(nums, i, pos-1);
        root->right=chk(nums, pos+1, j);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums){
        return chk(nums, 0, nums.size()-1);
    }
};








