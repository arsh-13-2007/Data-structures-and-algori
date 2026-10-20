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
    void inorder(TreeNode* ptr , vector<int>&ans){
        if(ptr == NULL ){
            return ; 
        }
        inorder(ptr->left , ans ) ; 
        ans.push_back(ptr->val) ; 
        inorder(ptr->right, ans ) ; 
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* ptr = root ; 
        vector<int>ans; 
        inorder(ptr , ans ) ; 
        return ans ; 
    }
};