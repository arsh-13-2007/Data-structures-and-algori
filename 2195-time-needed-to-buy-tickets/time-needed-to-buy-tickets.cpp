class Solution {
public:
    int timeRequiredToBuy(vector<int>&nums, int k) {
        queue<int>q ; 
        int count= 0 ;  
        int num = nums[k] ;
        nums[k] = -1 ;  
        for( int i = 0 ; i <nums.size() ;i++ ){
            q.push(nums[i]) ; 
     }

     while(num > 0){
        count++ ; 
        if(q.front() != -1){
            int x = q.front() ;
            q.pop() ; 
            if(x-1  != 0){
                q.push(x-1) ;
            }
            else{continue ;}
        }
        else{
            num -- ; 
            q.pop() ; 
            q.push(-1) ; 
        }
     }
    return count ; 
    }
};