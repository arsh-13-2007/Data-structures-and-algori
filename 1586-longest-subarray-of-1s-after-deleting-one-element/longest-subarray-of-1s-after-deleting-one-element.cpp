class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0 ; 
        int ans = 0 ;
        int count_ones = 0 ;  
        int count_zero = 0 ;
        for(int right = 0 ; right < nums.size() ; right++){
            if(nums[right] == 0 ){
                count_zero++ ; 
            }
            while(count_zero>1){
                if(nums[left] == 0 ){
                    count_zero-- ; 
                }
                left++ ; 
            }
            ans = max( ans , right - left ) ; 
        }
    return ans ; 
    }
};