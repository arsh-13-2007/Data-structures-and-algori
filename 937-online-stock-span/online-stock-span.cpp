class StockSpanner {
public:
    vector<int> nums;
    stack<int> s;
    StockSpanner() {
    }
    int next(int price) {
         int ans;
        nums.push_back(price);
        int i = nums.size() - 1 ; 
        while(!s.empty() && nums[s.top()] <= nums[i]){
            s.pop() ;
        } 
         
        if (s.empty()) {
            ans = i + 1; // it means that at ith day it ma prices from ab tak so phle wale sare samller hi h hai that's why we do i +1 ; 
        } 
        else {
            ans = i - s.top();
        }
            s.push(i) ;
        return ans ; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */