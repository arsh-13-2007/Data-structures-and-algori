class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& nums, vector<int>& target) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                return true ; 
            }
        }
        if(nums.size() == 1){
            return false ; 
        }
        vector<int>ans(3 , 0 ) ; 
        for(int i = 0 ; i <nums.size() ; i++ ){
            if((nums[i][0] > target[0]) || (nums[i][1] > target[1]) || (nums[i][2] > target[2])){
                continue ; 
            }
            ans[0] = max(ans[0] , nums[i][0]) ; 
            ans[1] = max(ans[1] , nums[i][1]) ; 
            ans[2] = max(ans[2] , nums[i][2]) ; 
            if(ans == target){
                return true ; 
            }
        }
    return false ; 
    }
};