class Solution {
public:
    int largestRectangleArea(vector<int>&nums) {
        stack<int> s ; 
        int lar_rect = INT_MIN; 
        int h ; 
        int w ;  
        for(int i = 0 ; i < nums.size() ; i++){
            while(!s.empty() && nums[i] < nums[s.top()]){
                h = nums[s.top()] ;
                s.pop() ;  
                int left = s.empty() ? -1 : s.top() ; 
                w = i- left - 1 ; 
                lar_rect = max(lar_rect , h*w) ; 
            }
            s.push(i); 
        }
        while(!s.empty()){
            h =  nums[s.top()] ; 
            s.pop() ; 
            int left = s.empty() ?-1 : s.top() ; 
            w = nums.size() - left - 1 ; 
            lar_rect = max(lar_rect , h*w) ; 
        }
    return lar_rect ; 
    }
};