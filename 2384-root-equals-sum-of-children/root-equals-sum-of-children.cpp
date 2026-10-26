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
    bool check(TreeNode* root){
        if (root == NULL) {
            return true;
        }
        if (root->left == NULL && root->right == NULL) {
            return true;
        }
        int left_val ;
        int right_val ;
        if(root->left == NULL || root->right == NULL){
             if(root->left == NULL ){
                left_val = 0 ;
                right_val = root->right->val ; }
            else{
                right_val = 0 ; 
                left_val = root->left->val ; 
            }
            
        }
        else{ left_val = root->left->val ; right_val = root->right->val ;  }
        if ((left_val + right_val) != root->val) {
            return false;
        }
        return check(root->left) && check(root->right);}
    bool checkTree(TreeNode* root) {
         return check(root) ; 
    }
};