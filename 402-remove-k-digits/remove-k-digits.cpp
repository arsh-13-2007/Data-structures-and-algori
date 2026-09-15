class Solution {
public:
    string removeKdigits(string nums, int k) {
        string s  ; 
        if( k == nums.size()){
            return "0" ; 
        }    
        int n = 0 ; 
        int i = 0 ; 
        for(int i = 0 ; i < nums.length() ; i++){
            while(!s.empty() && nums[i] < s.back() && n < k  ){
                    s.pop_back() ; 
                    n++ ;
            }
            s.push_back(nums[i]) ; 
        }
        while (n < k) {
            s.pop_back();
            n++;}
        
        nums = "" ; 
        while(!s.empty()){
         nums.push_back(s.back());
         s.pop_back() ; 
        }
    reverse(nums.begin() , nums.end()) ; 
    int idx = 0 ; 
    while(idx < nums.size() && nums[idx] == '0'){
        idx++ ; 
    }
    nums = nums.substr(idx) ; 
    if(nums == ""){
        return "0" ; 
    }
    return nums ; 
    }
};