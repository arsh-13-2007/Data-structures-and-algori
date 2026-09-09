class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(), s.begin(), ::tolower);
        int left = 0 ; 
        int right = s.length()-1; 
        while( left <= right){
            if(!isalnum(s[left])){
                left++ ; 
            }
            if(!isalnum(s[right])){
                right-- ; 
            }
            if(isalnum(s[left]) && isalnum(s[right])){
                if(s[left] != s[right]) {
                    return false ; 
                }
                left++ ; 
                right-- ; 
            }
        }
    return true ; 
    }
};