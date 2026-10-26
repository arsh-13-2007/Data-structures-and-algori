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
    bool check(TreeNode* root , TreeNode* subroot){
        if(root == NULL && subroot == NULL){
            return true ; 
        }
        if(root == NULL || subroot == NULL){
            return false ; 
        }
        if(root->val == subroot->val &&  check(root->left , subroot->left) && check(root->right , subroot->right) ){
            return true ; 
        }
        return false ; 
    } 
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
           if(root == NULL ){
            return false ; 
           }
           if(check(root , subroot)){
            return true ; 
           }
           return isSubtree(root->left, subroot) || isSubtree(root->right, subroot); 
    }
};