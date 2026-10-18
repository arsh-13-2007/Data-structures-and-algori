class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newinterval) {
        vector<vector<int>>result ; 
        int i = 0 ; 
        while(  i < intervals.size() && intervals[i][1] < newinterval[0]){
            result.push_back({intervals[i][0] , intervals[i][1]}) ; 
            i++ ; 
        }
         int st = newinterval[0];
        int ed = newinterval[1];

        while (i < intervals.size() && intervals[i][0] <= ed) {
            st = min(st, intervals[i][0]);
            ed = max(ed, intervals[i][1]);
            i++;
        }

        result.push_back({st, ed});
        while(i < intervals.size() ){
            result.push_back({intervals[i][0] , intervals[i][1]}) ; 
            i++ ; 
        }
    return result ; 
    }
};