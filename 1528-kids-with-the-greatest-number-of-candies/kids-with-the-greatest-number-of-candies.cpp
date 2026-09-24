class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int ec) {
        int max_count = 0 ; 
        for(int i = 0 ; i < nums.size() ;  i++){
            max_count = max(max_count , nums[i]) ; 
        }
        vector<bool>arr; 
        for(int i = 0 ; i< nums.size() ; i++){
            if((nums[i] + ec) < max_count){
                arr.push_back(false) ; 
            }
            else {
                arr.push_back(true) ; 
            }
        }
    return arr ; 
    }
};