class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> ans ; 
        stack<int> s ; 

        for( int i = 0 ; i < nums.size() ; i++){
            if(nums[i] < 0 ){
                while(!s.empty() && s.top() < -(nums[i])){
                    s.pop() ; 
                }
                if(!s.empty() && s.top() == -(nums[i])){
                    s.pop() ; 
                }
                else if (s.empty() ){
                    ans.push_back(nums[i]) ; 
                }
                else{
                    continue ; 
                }
            }
            else{
                s.push(nums[i]) ; 
            }
        }
        int k = ans.size() ; 
         while(!s.empty()){
                int x = s.top() ; 
                ans.push_back(x) ;
                s.pop() ; 
            }
        if( k== 0 ){
        reverse(ans.begin() , ans.end()) ; 
        }
        else{
        reverse(ans.begin() + k , ans.end()) ; 
        }
    return ans ; 
    }
};