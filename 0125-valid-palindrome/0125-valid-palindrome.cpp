#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        // Step 1: Clean the string (remove non-alphanumeric, lowercase)
        for (char ch : s) {
            if (isalnum(ch)) {
                cleaned += tolower(ch);
            }
        }

        // Step 2: Check if cleaned is a palindrome
        string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());

        return cleaned == reversed;
    }
};
