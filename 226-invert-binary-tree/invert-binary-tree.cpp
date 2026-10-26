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
    void check(TreeNode* ptr ){ 
        if(ptr == NULL ){
            return ; 
        }  
        check(ptr->left ) ; 
        check(ptr->right) ;
        swap(ptr->left , ptr->right) ; 
        return ; 
    }
    TreeNode* invertTree(TreeNode* root) {
        check(root) ; 
        return root ; 
    }
};