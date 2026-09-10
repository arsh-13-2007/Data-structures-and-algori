class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool>arr(nums.size() , false ) ; 
        for( int i = 0 ;i < nums.size() ; i++){
            arr[nums[i]] = true ; 
        }
        for(int i = 0  ; i < nums.size() ; i++){
            if(arr[i] == false){
                return i ; 
            }
        }
    return nums.size() ; 
    }
};