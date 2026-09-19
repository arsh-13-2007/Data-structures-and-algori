class Solution {
public:
    int maxScore(vector<int>&nums, int k) {
        int sum = 0 ; 
        int max_sum = 0 ; 
        int j = 1 ; 
        for(int i = 0  ; i<k ; i++ ){
            sum = sum + nums[i] ; 
        }
        max_sum = sum ; 
        for(int i = k-1 ; i>=0;i-- ){
            sum = sum - nums[i] ; 
            sum = sum + nums[nums.size() - j] ; 
            max_sum = max( max_sum , sum ) ; 
            j++ ; 
        }
    return max_sum ; 
    }
};