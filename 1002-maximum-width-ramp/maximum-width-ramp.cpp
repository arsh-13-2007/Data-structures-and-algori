class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int>s ;
        int idx = 0 ; 
        int max_idx  = 0 ;
        s.push(0) ; 
        for( int i = 1;i < nums.size() ; i++){
            if(nums[i] < nums[s.top()]){
                s.push(i) ; }
            
        }
        for( int i = nums.size() -1 ;i>= 0  ; i--){
            while(!s.empty() && nums[i] >= nums[s.top()]){
                max_idx = max( max_idx , i - s.top());
                s.pop(); 
            }
        }
    return max_idx ; 
    }
};