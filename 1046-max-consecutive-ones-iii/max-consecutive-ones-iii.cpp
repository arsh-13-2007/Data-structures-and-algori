class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 ; 
        int right = 0 ; 
        int max_length = 0 ; 
        int length = 0 ; 
        int n = k ; 
        // if (n == 0) {
        //     int count = 0;
        //     for (int i = 0; i < nums.size(); i++) {
        //         if (nums[i] == 1) {
        //             count++;
        //         }
        //         else {
        //             count = 0;
        //         }
        //         max_length = max(max_length, count);
        //     }
        //     return max_length;
        // }
        while( right < nums.size()){
            if(n != 0){
                if(nums[right] == 0){
                    length = right - left+1 ; 
                    max_length= max( max_length , length) ;
                    right++ ; 
                    n-- ; 
                    continue ;   }
                else{
                    length = right - left+1 ; 
                    max_length= max( max_length , length) ;
                    right++ ;
                    continue ; } }
            else if( n ==0 ){
                if(nums[right] == 1){
                    length = right - left+1 ; 
                    max_length= max(max_length , length) ;
                    right++ ; 
                    continue ; }  }
            if(n== 0){
                if(nums[left] == 0){ 
                    n++ ;
                    left++ ;
                    continue ;  
                }
                else{
                    left++ ; }}  }
    return max_length ; 
    }
};