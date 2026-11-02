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
    int leftside(TreeNode* root){
        TreeNode* ptr = root; 
        int lh = 0 ; 
        while(ptr != NULL){
            ptr = ptr->left ; 
            lh ++ ;
        }
        return lh ; 
    }
    int rightside(TreeNode* root){
        TreeNode * ptr = root ;
        int rh = 0 ;
        while(ptr != NULL){
            ptr = ptr->right; 
            rh++ ;
        } 
        return rh ;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL){
            return 0 ; 
        }
        int lh = leftside(root) ; 
        int rh = rightside(root) ; 

        if(lh == rh){
            return (1<<lh) -1  ; 
        }

        return countNodes(root->left)+ countNodes(root->right) +1 ; 
    }
};