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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL){
            return {} ; 
        }
        deque<TreeNode*>dq ;
        vector<vector<int>>ans ; 
         
        int level = 0 ; 
        dq.push_back(root) ; 
        while(!dq.empty()){
            int size= dq.size() ; 
            vector<int>curr_ans ;
            level++ ; 
            for(int i = 0 ; i < size ; i++){
                if(level% 2 == 0 ){
                    TreeNode* ptr = dq.back() ; 
                    dq.pop_back() ; 
                    curr_ans.push_back(ptr->val) ; 
                    if(ptr->right != NULL){
                        dq.push_front(ptr->right) ; 
                    }
                    if(ptr->left != NULL){
                        dq.push_front(ptr->left) ; 
                    }
                }
                else{
                    TreeNode* curr = dq.front() ; 
                    dq.pop_front() ; 
                    curr_ans.push_back(curr->val) ; 
                    if(curr->left != NULL){
                        dq.push_back(curr->left) ; 
                    }
                    if(curr->right != NULL){
                        dq.push_back(curr->right) ; 
                    }
                }
            }
        ans.push_back(curr_ans) ; 
        }
    return ans ; 
    }
};