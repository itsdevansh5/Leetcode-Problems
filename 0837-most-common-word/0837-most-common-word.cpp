#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include <cctype>

class Solution {
public:
    std::string& toLower(std::string& s) {
        std::transform(s.begin(), s.end(), s.begin(), 
                       [](unsigned char c){ return std::tolower(c); });
        return s;
    }

    std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned) {
        
        // --- Step 1: Clean and Lowercase (Handling Punctuation) ---
        // Replace all non-alphabetic characters with spaces.
        for (char &c : paragraph) {
            if (!std::isalpha(c)) {
                c = ' ';
            }
        }
        
        // Convert the entire cleaned string to lowercase
        toLower(paragraph); 

        // --- Step 2: Parse and Count Frequencies ---
        std::unordered_map<std::string, int> m;
        std::stringstream ss(paragraph);
        std::string word;
        
        while (ss >> word) {
            // After cleaning, words should be clean, but still need to ensure no empty string or final trims
            if (!word.empty()) {
                m[word]++;
            }
        }

        // --- Step 3: Filter Banned Words (for O(1) lookup) ---
        // Create a set for O(1) checking of banned words.
        std::unordered_set<std::string> banned_set(banned.begin(), banned.end());

        // --- Step 4: Find Max Frequency (Correct Tracking) ---
        int maxf = 0; // Initialize to 0, since frequencies cannot be negative
        std::string maxv = "";
        
        for (auto const& pair : m) {
            const std::string& current_word = pair.first;
            int current_freq = pair.second;
            
            // Check if the word is NOT banned
            if (banned_set.find(current_word) == banned_set.end()) {
                
                // Check for new maximum frequency
                if (current_freq > maxf) {
                    maxf = current_freq;  // ✅ Update max frequency
                    maxv = current_word;  // ✅ Update max word
                }
                // NOTE: If frequencies are equal, the problem statement says
                // "return any of them." By iterating over the unordered_map, 
                // we naturally return the first one encountered that matches.
            }
        }
        
        return maxv;
    }
};