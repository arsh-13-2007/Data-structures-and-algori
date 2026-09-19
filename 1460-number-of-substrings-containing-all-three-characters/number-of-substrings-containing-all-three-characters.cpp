class Solution {
public:
    int numberOfSubstrings(string s) {
        int alast = -1 ;
        int blast = -1 ;
        int clast = -1 ;
        int count = 0 ; 
        for(int i = 0 ; i<s.length() ;i++){
            if(s[i] == 'a'){alast = i ;}
            if(s[i] == 'b'){blast = i ;}
            if(s[i] == 'c'){clast = i ;}
            int last = min(alast,min(blast,clast));
            if (last != -1)
            count += last + 1;
        }
    return count ; 
    }
};