class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp ; 
        long long max_sum = 0;
        long long sum = 0;
        int left = 0 ;
        for(int right = 0 ; right < nums.size()  ; right++){
            sum = sum + nums[right] ; 
            mp[nums[right]]++ ; 
            while(mp[nums[right]]> 1 || right - left+1 > k ){
                mp[nums[left]]-- ; 
                sum = sum- nums[left] ; 
                if (mp[nums[left]] == 0) {
                    mp.erase(nums[left]);
                }
                left++ ; 
            }
            if (right - left + 1 == k) {
                max_sum = max(max_sum, sum);
            }

        }
    return max_sum ; 
    }
};