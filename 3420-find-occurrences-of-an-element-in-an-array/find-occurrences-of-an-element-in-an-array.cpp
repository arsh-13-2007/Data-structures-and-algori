class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans(queries.size());
        vector<int>pos ;
        pos.push_back(-1) ;  
        int count = 0 ; 
        for( int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == x){
                count++ ; 
                pos.push_back(i) ; 
            }
        }
        int n = pos.size() ; 
        for(int i = 0 ; i < queries.size() ;i++){
            if(queries[i] > count){
                ans[i] = -1 ; 
                continue ; 
            } 
            ans[i] = pos[queries[i]] ; 
        }
    return ans ; 
    }
};