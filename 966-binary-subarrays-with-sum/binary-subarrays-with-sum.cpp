class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       
        int left = 0 ; 
        int ans  = 0 ; 
        int sum  = 0 ; 
        int count_zero = 0  ;
        for( int right = 0 ; right < nums.size() ; right++){
            sum = sum + nums[right] ; 
            while( left < right &&(nums[left] == 0 ||  sum > goal)){
                if(nums[left] == 0 ){
                    count_zero++ ; 
                }
                else {
                    count_zero = 0 ; 
                }
                sum = sum - nums[left] ; 
                left++ ; 
            }
            if(sum == goal){
               ans = ans + 1 + count_zero;
            } 
        }
    return ans ; 
    }
};