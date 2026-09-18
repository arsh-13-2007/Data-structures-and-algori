class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int max_ans = 0 ; 
        unordered_map<int , int>mp ; 
        int left = 0 ; 
        for( int right = 0 ;right <nums.size() ; right++  ){
            mp[nums[right]]++ ; 
            while(mp.size() > 2 ){
                mp[nums[left]]-- ; 
                if(mp[nums[left]] == 0){
                    mp.erase(nums[left]) ; 
                }
                left++;
            }
        max_ans= max(max_ans , right - left +1) ;
        }
    return max_ans ; 
    }
};