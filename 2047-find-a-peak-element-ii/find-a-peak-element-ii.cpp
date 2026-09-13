class Solution {
public:
    bool check(vector<vector<int>>& nums , int i , int mid){
        if(mid > 0 ){ // left 
            if(nums[i][mid-1] > nums[i][mid]){
                return false ; 
            }
        }
        if(mid < nums[0].size()-1){
            if(nums[i][mid+1] > nums[i][mid]){
                return false ; 
            }
        }
        if( i > 0){
            if(nums[i-1][mid] > nums[i][mid]){
                return false ; 
            }
        }
        if( i < nums.size()-1){
            if(nums[i+1][mid] > nums[i][mid]){
                return false ; 
            }
        }
    return true ; 
    }
    vector<int> findPeakGrid(vector<vector<int>>& nums) {
        int m = nums.size();int n = nums[0].size(); 
        int start = 0 ; int end = m-1 ; 

        while(start <= end ){
            int mid = start + (end - start) / 2 ; 
            int col = 0 ; 
            for(int j = 1 ;j < n  ; j++){
                if(nums[mid][j] > nums[mid][col]){
                    col = j ; 
                }
            }
            if(check(nums , mid , col)){
                return {mid, col} ; 
            }
            if( mid > 0 && nums[mid-1][col] > nums[mid][col]){
                    end = mid -1 ; 
            }
            else{
                start = mid +1 ; 
            }
        }
    return { -1 , -1} ; 
    }
};