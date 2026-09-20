class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26 , 0) ; 
        vector<int>wfreq(26 , 0) ; 
        int left = 0 ; 
        for(int i = 0 ; i < s1.length() ; i++){
            freq[s1[i]-'a']++ ; 
        }
        for( int right = 0 ; right < s2.length() ; right++){
            if((right - left) > s1.length()-1){
                wfreq[s2[left] -'a']-- ; 
                left++ ; 
            }
            wfreq[s2[right] -'a']++ ; 
            if(wfreq == freq){
                return true ; 
            }
        }
    return false ; 
    }
};