/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL){
            return {} ; 
        }
        queue<Node*>q ;
        vector<vector<int>>final_ans ;
        q.push(root) ; 
        while(!q.empty()){
            vector<int>ans ; 
            int size = q.size() ; 
            for(int i = 0 ; i < size ; i++){
                Node* ptr = q.front() ; 
                q.pop() ; 
                ans.push_back(ptr->val) ; 
                for(int j = 0 ; j < ptr->children.size() ;j++){
                      q.push(ptr->children[j]) ; 
                }
            }
        final_ans.push_back(ans) ; 
        } 
    return final_ans ; 
    }
};