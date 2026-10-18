class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
        if(hand.size() % groupsize != 0){
            return false ; 
        }
    map<int,int> mp ; 
    for(int i = 0 ; i < hand.size() ; i++){
        mp[hand[i]]++ ; 
    }
    while(mp.size() != 0 ){
        int st = mp.begin()->first ; 
        for(int i = 1 ; i <= groupsize ; i++){
            if(mp.find(st) == mp.end()){
                return false ; 
            }
            mp[st]-- ; 
            if(mp[st] == 0){
                mp.erase(st) ; 
            }
            st = st+ 1 ; 
        }
    }
    return true  ; 
    }
};  