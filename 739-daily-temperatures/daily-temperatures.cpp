class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int>ans(nums.size() , 0 ) ; 
        stack<int>s ; 
        for( int i= nums.size() -1 ; i >= 0 ; i-- ){

            while(!s.empty() && nums[i] >= nums[s.top()]){
                s.pop() ; 
            }
            if(!s.empty()){
               ans[i] = s.top() - i ; 
            }
            s.push(i) ; 
        }
    return ans ; 
    }
};