class Solution {
public:
    int partitionString(string s) {
        unordered_map<char , int> mp ;
        int count = 0 ;  
        for(int i = 0; i < s.size() ; i++){
            if(mp.find(s[i]) != mp.end()){
                mp.clear() ; 
                count++ ;  
            }
            mp[s[i]]++ ; 
        }
    return count +1  ; 
    }
};