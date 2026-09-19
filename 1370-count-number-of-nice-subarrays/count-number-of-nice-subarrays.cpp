class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    int left = 0 ;
    int odd_count = 0 ;
    int previous_count = 0 ; 
    int ans = 0 ;
    for(int right = 0  ; right < nums.size() ; right++){
        if(nums[right] %2 != 0 ){
            odd_count++ ; 
            previous_count = 0  ;
        }
        while( left <nums.size() && odd_count ==  k){
            previous_count++ ; 
            if(nums[left]%2 != 0 ){
                odd_count-- ;    
            }
            left++; 
        }
        ans= ans +previous_count ;  
    }
    return ans  ; 
    }
};