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
    
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0 ; 
        }
        queue<TreeNode*>q ; 
        int level = 0  ; 
        q.push(root) ; 
        while(!q.empty()){
            int size = q.size()  ; 
            level++ ; 
            for(int i = 0 ; i < size ; i++){
                TreeNode* ptr = q.front() ; 
                q.pop() ; 
                if(ptr->left == NULL && ptr->right == NULL ){
                    return level ; 
                }
                if(ptr->left != NULL){
                    q.push(ptr->left) ;
                }
                if(ptr->right != NULL){
                    q.push(ptr->right) ; 
                }
            }
        }
    return level ; 
    }
};