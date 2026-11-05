class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int bestStart = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            int left = i;
            int right = i;
            // for odd size array
            while (left >= 0 && right < n &&
                   s[left] == s[right]) {

                if (right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    bestStart = left;
                }

                left--;
                right++;
            }
            left = i;
            right = i + 1;
            // even size array
            while (left >= 0 && right < n &&
                   s[left] == s[right]) {

                if (right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    bestStart = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(bestStart, maxLen);
    }
};