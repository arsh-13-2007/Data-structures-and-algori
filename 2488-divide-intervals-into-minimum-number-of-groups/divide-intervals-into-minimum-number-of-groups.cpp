class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start, end;

        for (auto& x : intervals) {
            start.push_back(x[0]);
            end.push_back(x[1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int i = 0, j = 0;
        int count = 0, ans = 0;
        int n = start.size();

        while (i < n) {
            if (start[i] <= end[j]) {
                count++;
                ans = max(ans, count);
                i++;
            } else {
                count--;
                j++;
            }
        }

        return ans;
    }
};