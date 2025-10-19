#include <string>
#include <vector>
#include <algorithm>
#include <cctype> // Include for isalpha - a cleaner way to check for letters

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<int> dash; // Stores indices of non-letters
        vector<char> c;    // Stores the non-letter characters
        string normal;     // Stores only the letters

        // Pass 1: Separate letters and save non-letters with their original indices
        for (int i = 0; i < s.size(); i++) {
            // Using isalpha() from <cctype> is cleaner and more robust than manual ASCII checks.
            if (isalpha(s[i])) {
                normal += s[i];
            } else {
                dash.push_back(i);
                c.push_back(s[i]);
            }
        }

        // Reverse the string containing only letters
        std::reverse(normal.begin(), normal.end());

        // Pass 2: Reconstruct the final string by iterating over the length of the original string 's'
        string ans = "";
        
        // Pointers for the data we collected
        int letter_idx = 0;      // Index for the reversed 'normal' string (your 'i')
        int non_letter_idx = 0;  // Index for 'dash' and 'c' vectors (your 'j')

        // FIX: Iterate exactly 's.size()' times for the reconstruction
        for (int current_pos = 0; current_pos < s.size(); ++current_pos) {
            
            // FIX: The condition must check two things:
            // 1. That we still have non-letters to place (non_letter_idx < dash.size())
            // 2. That the current position matches the stored position for the non-letter
            if (non_letter_idx < dash.size() && current_pos == dash[non_letter_idx]) {
                // Current position must be a non-letter
                ans += c[non_letter_idx];
                non_letter_idx++;
            } else {
                // Current position must be a letter
                ans += normal[letter_idx];
                letter_idx++;
            }
        }

        return ans;
    }
};