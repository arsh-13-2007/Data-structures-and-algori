class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq(26, 0);
        vector<int> wfreq(26, 0);
        vector<int>ans ;
        int left = 0 ; 
        for(int i = 0 ; i < p.length() ; i++){
            freq[p[i] - 'a']++ ;  
        }

        for(int right = 0 ; right < s.length() ; right++){
            if((right - left) > p.length()-1){
                wfreq[s[left] -'a']-- ; 
                left++ ; 
            }
            wfreq[s[right] -'a']++ ; 
            if(wfreq == freq ){
                ans.push_back(left) ; 
            }
        }
    return ans ; 
    }
};