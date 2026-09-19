class Solution {
public:
    int countSubstrings(string s) {
        int flag = 0 ; 
        int ans = 0 ; 
        for(int i = 0 ; i < s.length() ; i++ ){
            int left = i ; int right = i ; 
            while(left >= 0 && right< s.length()){ // oddd 
                if( s[left] == s[right]){
                    ans = ans +1 ;}
                else {
                    break ; 
                }
                left-- ; 
                right++ ;
            }
            left = i-1 ;  right = i ; 
            while(left >= 0 && right< s.length()){ // even 
                if(s[left] == s[right]){
                    ans = ans +1 ;}
                else {
                    break ; 
                }
                left-- ; 
                right++ ;
            }
        } 
    return ans ; 
    }
};