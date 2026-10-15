class Solution {
public:
    static bool compare(vector<int>&a , vector<int>&b){
        return a[1] < b[1] ; 
    }
    int findLongestChain(vector<vector<int>>& pair) {
        sort(pair.begin() , pair.end() , compare) ; 
        int count = 0 ; 
        int ft = INT_MIN ; 
        for(int i = 0 ; i < pair.size() ; i++){
           if(pair[i][0] > ft){
             count++ ; 
             ft = pair[i][1] ; 
           }
        }
      return count ; 
    }
};