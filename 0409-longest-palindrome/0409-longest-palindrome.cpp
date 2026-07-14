class Solution {
public:
    int longestPalindrome(string s) {
        int lower_case[26] = {0};
        int upper_case[26] = {0};

        int count = 0; // this will hold the ans ie the longest palindrome
        bool odd = 0;  // bcz if the char is odd times than add one to the count

        // to count the cumber of upper case and upper case chatacter
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                lower_case[s[i] - 'a']++;
            } else {
                upper_case[s[i] - 'A']++;
            }
        }
        // now the actual code logic
        for (int i = 0; i < 26; i++) {
            if (lower_case[i] % 2 == 0) {
                count += lower_case[i];
            } else {
                count += lower_case[i] - 1;
                odd = 1;
            }

            if (upper_case[i] % 2 == 0) {
                count += upper_case[i];

            } else {
                count += upper_case[i] - 1;
                odd = 1;
            }
        }
        return count + odd;
    }

};