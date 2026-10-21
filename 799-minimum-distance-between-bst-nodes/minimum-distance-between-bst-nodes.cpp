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
    void  answer(TreeNode* root, int &ans , int &prev  ){
        if(root == NULL   ){
            return   ; 
        }
        
        answer(root->left,ans , prev ) ;
        if (prev != -1) {
        ans = min(ans, root->val - prev);
        }
        prev = root->val ; 
        answer(root->right , ans , prev  ) ; 
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX ; 
        int prev = -1 ; 
        answer(root , ans , prev ) ; 
        return ans ; 
    }
};