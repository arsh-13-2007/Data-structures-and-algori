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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q ; 
        q.push(root) ; 
        int level = 0 ; 
        int sum = 0 ;
        int max_sum  = INT_MIN ;  
        int ans = 0 ; 
        while(!q.empty()){
            int size = q.size() ; 
            level++  ; 
            sum = 0 ; 
            for(int i = 0 ; i < size ; i++){
                TreeNode* ptr = q.front() ; 
                q.pop() ; 
                sum  = sum + ptr->val ; 
                if(ptr->left != NULL){
                    q.push(ptr->left) ; 
                } 
                if(ptr->right != NULL){
                    q.push(ptr->right) ; 
                }
            }
            if(sum > max_sum  ){
                max_sum = sum ; 
                ans = level ; 
            }
        }
    return ans ; 
    }
};