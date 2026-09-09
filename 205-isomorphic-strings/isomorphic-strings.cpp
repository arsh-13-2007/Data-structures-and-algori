class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false ; 
        }
        unordered_map<char , char> mp ; /// s to t check 
        unordered_map<char , char>mp2 ; // t to s check  

        for( int i = 0 ; i < s.length(); i++){
            if(mp.find(s[i]) != mp.end()){
                if(mp[s[i]] != t[i] ){
                    return false ; 
                }
            }
            else{
                if(mp2.find(t[i]) != mp2.end()){
                    if(mp2[t[i]]  != s[i] ){ return false ; }
                }
            }
            mp[s[i]] = t[i] ;
            mp2[t[i]] = s[i] ; 
        }
    return true ; 
    }
};