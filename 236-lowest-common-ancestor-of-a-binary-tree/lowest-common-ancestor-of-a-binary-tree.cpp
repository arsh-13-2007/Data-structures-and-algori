/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q){
            return root ; 
        }
        TreeNode* final_ans = root ;  
        TreeNode* ans1 = lowestCommonAncestor(root->left , p , q ) ; 
        TreeNode* ans2 = lowestCommonAncestor(root->right , p , q) ; 
        if(ans1 != NULL && ans2 != NULL){
            return final_ans ; 
        }
        if(ans1 != NULL) return ans1;
        if(ans2 != NULL) return ans2;

        return NULL; 
    }
};