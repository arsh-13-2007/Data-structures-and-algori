class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp = -1 ; 
        int n = nums.size() ; 
        for( int i = n-2 ;i >= 0 ;i--){
            if(nums[i] < nums[i+1]){
                temp  = i ; 
                break ; 
            }
        }
        if(temp == -1 ){
            reverse(nums.begin() , nums.end()) ;
            return ; 
        }
        for(int i = n-1 ; i>  temp ; i--){
            if(nums[i] > nums[temp]){
                swap(nums[i] , nums[temp]) ; 
                break ; 
            }
        }
        int start = temp +1 ; 
        int end = n-1 ; 
        while(start <= end ){
             swap(nums[start] , nums[end]) ; 
             start++ ; 
             end -- ; 
        }
    return ; 
    }
};