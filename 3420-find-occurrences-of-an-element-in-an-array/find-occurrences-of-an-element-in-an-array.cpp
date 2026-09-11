class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans(queries.size());
        unordered_map<int , int>mp ; 
        int count = 0 ; 
        for( int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == x){
                count++ ; 
                mp[count] = i ; 
            }
        }

        for(int i = 0 ; i < queries.size() ;i++){
            if(queries[i] > count){
                ans[i] = -1 ; 
                continue ; 
            }
            ans[i] = mp[queries[i]] ; 
        }
    return ans ; 
    }
};