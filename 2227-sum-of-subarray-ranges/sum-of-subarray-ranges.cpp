class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long max_sum = 0;
        long long min_sum = 0;
       stack<int>s ; 
       int n = nums.size() ; 
       vector<int>ans_nge(n , n ) ; 
       vector<int>ans_pge(n , -1) ; 
       vector<int>ans_pse(n, -1 ) ; 
       vector<int>ans_nse(n, n ) ;
       // nge 
       for(int i = n -1 ; i>=0 ; i--){

        while(!s.empty() &&  nums[s.top()] <= nums[i]){
            s.pop() ; 
        }
        if(!s.empty()){
            ans_nge[i] = s.top() ; 
        }
        s.push(i) ; 
       }
        while (!s.empty()){
            s.pop();}
       // pge
       for( int i = 0 ; i < n ; i++){
        while(!s.empty() && nums[s.top()] < nums[i]){
            s.pop() ; 
        }
        if(!s.empty()){
            ans_pge[i] = s.top() ; 
        }
        s.push(i) ; 
       }
    // compute max
    for(int i = n-1 ; i>= 0 ; i--){
        long long left = i - ans_pge[i] ; 
        long long right  = ans_nge[i] - i ; 
        max_sum =  max_sum +(1LL*left*right*nums[i]) ; 
    }
    // nse 
    while (!s.empty()){ s.pop();}
    for( int i = n-1 ; i>= 0 ; i--){
        while(!s.empty() && nums[s.top()] >= nums[i]){
            s.pop() ; 
        }
        if(!s.empty()){
            ans_nse[i] = s.top() ; 
        }
        s.push(i) ; 
    }
    while (!s.empty()){s.pop();}
    // pse 
    for(int i = 0 ; i < n ; i++){
        while(!s.empty() && nums[s.top()] > nums[i]){
            s.pop() ; 
        }
        if(!s.empty()){
            ans_pse[i] = s.top() ;
        }
        s.push(i) ; 
    }
    // compute min
    for(int i = 0  ; i < n ; i++){
         long long left = i - ans_pse[i];
        long long right = ans_nse[i] - i;

            min_sum += (1LL * nums[i] * left * right);
    }
    return max_sum - min_sum ; 
    }
};