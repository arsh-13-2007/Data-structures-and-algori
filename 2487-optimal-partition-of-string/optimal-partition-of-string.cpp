class Solution {
public:
    int partitionString(string s) {
        vector<int>freq(26 , 0 ) ; 
        int count = 1 ; 
        for(int i = 0 ; i < s.size()  ; i++){
            if(freq[s[i] - 'a'] != 0 ){
                count++ ; 
                for(int i = 0 ; i < 26 ; i++){
                    freq[i] = 0 ; 
                }
            }
            freq[s[i] - 'a']++ ; 
        }
    return count; 
    }
};