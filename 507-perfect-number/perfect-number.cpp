class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int n = num ; 
        int sum = 1 ; 
        for( int i = 2 ; i*i < num ; i++){
            if(num %i == 0){
                sum = sum + i ; 
                if (i != num / i) {
                    sum += num / i;
                }
            }
        }
        return sum == n ;  
    }
};