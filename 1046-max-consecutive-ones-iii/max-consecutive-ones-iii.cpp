class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 ; 
        int right = 0 ; 
        int max_length = 0 ; 
        int length = 0 ; 
        int n = k ; 
        while( right < nums.size()){
            if(n != 0){
                if(nums[right] == 0){
                    length = right - left+1 ; 
                    max_length= max( max_length , length) ;
                    right++ ; 
                    n-- ; 
                    continue ; 
                }
                else{
                    length = right - left+1 ; 
                    max_length= max( max_length , length) ;
                    right++ ;
                    continue ; 
                }
            }
            else if( n ==0 ){
                if(nums[right] == 1){
                    length = right - left+1 ; 
                    max_length= max(max_length , length) ;
                    right++ ; 
                    continue ; 
                }
            }
            if(n== 0){
                if(nums[left] == 0){
                    left++ ; 
                    n++ ;
                    continue ;  
                }
                else{
                    left++ ; 
                }
            }
        }
    return max_length ; 
    }
};