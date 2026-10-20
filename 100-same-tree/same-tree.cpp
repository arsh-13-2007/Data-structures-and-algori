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
    void check(TreeNode * root , vector<int>&ans){
        if(root == NULL){
            ans.push_back(INT_MIN) ; 
            return ; 
        }
        ans.push_back(root->val) ; 
        check(root->left , ans ) ; 
        check(root->right , ans ) ; 
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>ans ; 
        vector<int>ans1 ; 
        check(p , ans) ; 
        check(q , ans1) ; 
        if(ans == ans1){
            return true ; 
        }
        return false ; 
    }
};