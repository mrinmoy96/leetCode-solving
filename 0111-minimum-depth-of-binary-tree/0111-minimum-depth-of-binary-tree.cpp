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
 #include<algorithm>
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int leftPart=minDepth(root->left);
        int rightPart=minDepth(root->right);

        if(root->left==NULL){
            return 1+rightPart;
        }
        if(root->right==NULL){
            return 1+leftPart;
        }
        return min(leftPart, rightPart)+1;
    }    
};