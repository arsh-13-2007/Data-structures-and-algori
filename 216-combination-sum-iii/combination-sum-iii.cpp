class Solution {
public:
    void find_arr(int size , vector<int>&ans ,int start, vector<vector<int>>&final_ans , int target , int sum ) {
        if(ans.size() == size) {
            if(sum == target) {
                final_ans.push_back(ans);
            }
            return;
        }
        for( int i= start ; i < 10 ; i++){
            ans.push_back(i) ; 
            sum+= i ;
            find_arr(size , ans ,i+1, final_ans , target , sum); 
            sum-=i ; 
            ans.pop_back() ; 
        }
    }
    vector<vector<int>> combinationSum3(int size, int target) {
        vector<int>ans ; 
        vector<vector<int>>final_ans ;
        find_arr(size , ans , 1 , final_ans , target , 0 ) ; 
        return final_ans ;  
    }
};