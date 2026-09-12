class Solution {
public:

    void solve(vector<string>& ans, string& num, long long target,
               int index, string expr, long long value, long long prev) {
        if (index == num.size()) {
            if (value == target) {
                ans.push_back(expr);
            }
            return;
        }
        for (int i = index; i < num.size(); i++) {
            if (i > index && num[index] == '0')
                break;

            string part = num.substr(index, i - index + 1);
            long long curr = stoll(part);

            if (index == 0) {

                solve(ans, num, target,i + 1, part, curr, curr);
            }
            else {
                solve(ans, num, target,i + 1, expr + "+" + part,value + curr, curr);

                
                solve(ans, num, target,i + 1, expr + "-" + part,value - curr, -curr);

                solve(ans, num, target,
                      i + 1, expr + "*" + part,
                      value - prev + prev * curr,
                      prev * curr);
            }
        }
    }

    vector<string> addOperators(string num, int target) {
       vector<string> ans;
        solve(ans, num, (long long)target,0, "", 0, 0);
        return ans;
    }
};