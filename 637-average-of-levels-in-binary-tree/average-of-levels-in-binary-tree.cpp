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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q ; 
        q.push(root) ; 
        vector<double>ans ; 
        while(!q.empty()){
            long long  size = q.size() ; 
            long long  sum = 0 ; 
            for(int i = 0 ; i < size ; i++){
                TreeNode* ptr = q.front() ; 
                q.pop(); 
                sum = sum + ptr->val ; 
                if(ptr->left != NULL){
                    q.push( ptr->left ) ; 
                }
                if(ptr->right != NULL){
                    q.push(ptr->right) ; 
                }
            }
            ans.push_back((double)sum / size) ; 
        }
    return ans ; 
    }
};