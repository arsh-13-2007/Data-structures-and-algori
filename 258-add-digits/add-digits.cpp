class Solution {
public:
    //   if (num == 0)                         this solution is o(1) time complexity 
    //         return 0;

    //     return 1 + (num - 1) % 9;
    // }
    int sum(int n ){
        int sum = 0 ; 
        while( n > 0){
            sum = sum + n % 10 ; 
            n = n/ 10 ; 
        }
        return sum ; 
    }
    int addDigits(int num) {
        if(num < 10 ){
            return num ; 
        }
        while(num >= 10  ){
            num = sum(num) ; 
        }
    return num ; 
    }
};