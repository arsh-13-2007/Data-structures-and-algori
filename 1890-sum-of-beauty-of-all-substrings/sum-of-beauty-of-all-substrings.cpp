class Solution {
public:
    int beautySum(string s) {
        int max_high = 0;
        int ans = 0 ; 
        int min_low = INT_MAX;
        for( int i = 0 ; i < s.length() ; i++){
            unordered_map<char, int>mp ;
            int max_high = 0;
            int min_low = INT_MAX;
            for( int j = i ; j < s.length() ; j++){
                mp[s[j]] ++ ; 
                 int max_high = 0;
                int min_low = INT_MAX;
                for( char k = 'a' ;  k <= 'z' ; k++){
                    if(mp.find(k) != mp.end()){
                        max_high = max(max_high , mp[k]);
                        min_low = min(min_low , mp[k]) ; 
                    }
                }
             ans = ans + ( max_high - min_low) ;
            }
            
        }
    return ans ; 
    }
};