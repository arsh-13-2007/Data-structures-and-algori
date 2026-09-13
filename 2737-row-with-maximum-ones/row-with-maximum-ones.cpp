class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& nums) {
        int max_count = 0 ; 
        int sidx = 0 ; 
        for(int i = 0 ; i <nums.size() ; i++ ){
            int count = 0 ; 
            for(int j = 0 ;j < nums[0].size() ; j++){
                if(nums[i][j] == 1 ){
                    count++ ; 
                }
            }
        if(count > max_count){
            max_count = count ; 
            sidx = i  ; 
        }    
        }
    return { sidx , max_count } ;
    }
};