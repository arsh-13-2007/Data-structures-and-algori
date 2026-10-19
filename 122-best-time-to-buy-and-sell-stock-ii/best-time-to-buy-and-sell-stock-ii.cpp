class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int ans = 0 ; 
        int pick = 0 ;
        if (nums.size() < 2) return 0;
        for(int i = 1 ; i <nums.size() ; i++){
            if(nums[i] < nums[i-1] ){
                pick = i ; 
            }
            else{
                 if (i == nums.size() - 1 || nums[i] > nums[i + 1]) {
                    ans += nums[i] - nums[pick];
                }
            }
       }
       
    return ans ; 
    }
};