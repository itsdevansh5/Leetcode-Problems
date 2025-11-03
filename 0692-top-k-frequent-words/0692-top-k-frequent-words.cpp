#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <utility>

class Solution {
public:
    std::vector<std::string> topKFrequent(std::vector<std::string>& words, int k) {
        std::unordered_map<std::string, int> m;
        for (const std::string& word : words) {
            m[word]++;
        }
        
        std::vector<std::string> unique_words;
        for (const auto& pair : m) {
            unique_words.push_back(pair.first);
        }
        
        std::sort(unique_words.begin(), unique_words.end(), 
            [&](const std::string& a, const std::string& b) {
                int freq_a = m.at(a);
                int freq_b = m.at(b);
                
                if (freq_a != freq_b) {
                    return freq_a > freq_b;
                }
                
                return a < b;
            });
        
        std::vector<std::string> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(unique_words[i]);
        }
        
        return result;
    }
};