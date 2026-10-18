class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int>mp ; 
        vector<int>ans ; 
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]] = i+1 ; 
        }
        int i= 0 ; 
        while(i < s.size()){
            ans.push_back(mp[s[i]] - i ) ; 
            for(int j = i ; j < i + ans.back()  ; j++){
                if(mp[s[j]] > (ans.back() + i)){
                    ans.pop_back() ; 
                    ans.push_back(mp[s[j]] - i ) ; 
                }
            }
            i = ans.back() + i   ; 
        }
    return ans ; 
    }
};