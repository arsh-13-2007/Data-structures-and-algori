class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        vector<int>prefix(nums.size()) ; 
        unordered_map<int, int>mp ; 
        for( int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0 ){
                nums[i] = -1 ; 
            }
        }
        prefix[0] = nums[0] ; 
        for(int i =1 ; i < nums.size() ; i++ ){
            prefix[i] = prefix[i-1] + nums[i] ; 
        }

        mp[0] = -1;
        int longest_length = 0 ;
        for( int i = 0 ; i < prefix.size() ;i++){
            if(mp.find(prefix[i]) != mp.end()){
                longest_length = max(i- mp[prefix[i]]  , longest_length); 
            }
            else {
                mp[prefix[i]] = i;
            }
        }
    return longest_length ; 
    }
};