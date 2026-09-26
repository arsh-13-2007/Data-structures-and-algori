class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (int i = 0; i < t.length(); i++) {
            mp[t[i]]++;
        }
        int final_left = 0;
        int final_right = 0;
        int left = 0;
        int min_len = INT_MAX;
        int count = 0;
        unordered_map<char, int> twomp;
        for (int right = 0; right < s.length(); right++) {
            if (mp.find(s[right]) != mp.end()) {
                twomp[s[right]]++;
                if (twomp[s[right]] <= mp[s[right]]) {
                    count++;
                }
            }
            while (count == t.size()) {
                if (min_len > (right - left + 1)) {
                    min_len = right - left + 1;
                    final_left = left;
                    final_right = right;
                }

                if (twomp.find(s[left]) != twomp.end()) {
                    twomp[s[left]]--;
                    if (twomp[s[left]] < mp[s[left]]) {
                        count--;
                    }
                }
                left++;
            }
        }
        if (min_len == INT_MAX) {
            return "";
        }

        return s.substr(final_left, min_len);
    }
};