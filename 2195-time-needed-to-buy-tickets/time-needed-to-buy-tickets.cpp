class Solution {
public:
    int timeRequiredToBuy(vector<int>&nums, int k) {
        int sum = 0  ; 
        int num = nums[k] ; 
        for( int i = 0 ; i <nums.size() ;i++ ){
            if( i<= k  ){
                sum = sum + min(nums[i] , num) ;
            }
           else{
             sum = sum + min( nums[i] , num -1) ; 
           }  
     }
    return sum ; 
    }
};