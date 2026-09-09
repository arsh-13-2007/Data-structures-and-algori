class Solution {
public:
    int numberOfSubstrings(string s) {
        int alast = -1 ; 
        int blast = -1 ; 
        int clast = -1 ;
        int count = 0 ; 
        int a = 0 ; int b = 0 ; int c = 0 ; 
        for( int i = 0 ; i  < s.length() ; i++){
            if(s[i] == 'a'){ alast = i ;} 
            if(s[i] == 'b'){ blast = i ;} 
            if(s[i] == 'c'){ clast = i ;} 
            if(alast != -1 && blast !=-1 && clast != -1){
                count = count + (min({alast , blast , clast}) +1) ;  
            }
        }
    return count ; 
    }
};