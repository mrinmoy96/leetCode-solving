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
 #include<queue>
class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            vector<vector<int>> v;
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>>ans;
        vector<int>temp;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node){
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
                temp.push_back(node->val);
            }else{
                if(!q.empty()){
                    q.push(NULL);
                    ans.push_back(temp);
                    temp.resize(0);
                }
            }
            
        }
        ans.push_back(temp);
        return ans;
    
    }
};