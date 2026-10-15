class Solution {
public:
    static bool compare(vector<int>&a , vector<int> &b){
        if(a[1] == b[1]){
            return a[0] < b[0] ; 
        }
        return a[1] < b[1] ; 
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end() , compare);
        int ft = INT_MIN ; 
        int count = 0 ; 
        for(int i = 0 ; i < intervals.size() ; i++){
            if(intervals[i][0] >= ft){
                ft = intervals[i][1] ; 
            }
            else{
                count++ ; 
            }
        }
    return count ; 
    }
};