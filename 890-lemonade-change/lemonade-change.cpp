class Solution {
public:
    bool lemonadeChange(vector<int>&nums) {

        int ten = 0 ; 
        int five = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 5 ){
                five++ ;
            }
            else if(nums[i] == 10){
                if( five == 0){
                    return false ; 
                }
                ten++ ; 
                five-- ; 
            }
            else{
                if(ten >= 1 && five >= 1){
                    ten -- ; 
                    five -- ; 
                }
                else if  ( five >= 3 ){
                    five = five -3 ; 
                }
                else {
                    return false ; 
                }
            }
        }
    return true ; 
    }
};