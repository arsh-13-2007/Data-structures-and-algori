class Solution {
public:

    bool ispalidrome(string part) {
        int left = 0;
        int right = part.size() - 1;

        while(left < right) {
            if(part[left] != part[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    void all_string(string s, vector<string>& partition,
                    vector<vector<string>>& ans) {

        if(s.size() == 0) {
            ans.push_back(partition);
            return;
        }

        for(int i = 0; i < s.length(); i++) {

            string part = s.substr(0, i + 1);

            if(ispalidrome(part)) {

                partition.push_back(part);

                all_string(s.substr(i + 1), partition, ans);

                partition.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> partition;

        all_string(s, partition, ans);

        return ans;
    }
};