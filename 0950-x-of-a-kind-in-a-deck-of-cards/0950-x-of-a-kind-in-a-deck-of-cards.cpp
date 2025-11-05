#include <vector>
#include <unordered_map>
#include <numeric> // Required for std::gcd
#include <algorithm>
#include <iostream>

class Solution {
private:
    // Helper function to calculate GCD (in case <numeric> is not available, 
    // but std::gcd is standard since C++17)
    int gcd_manual(int a, int b) {
        while (b) {
            a %= b;
            std::swap(a, b);
        }
        return a;
    }

public:
    bool hasGroupsSizeX(std::vector<int>& deck) {
        // 1. Count Frequencies
        std::unordered_map<int, int> freq_map;
        for (int card : deck) {
            freq_map[card]++;
        }

        // Handle the edge case of an empty deck (usually returns true)
        // or a deck with only one unique card.
        if (freq_map.empty()) {
            return false; // Assuming an empty deck cannot be partitioned into groups of size x > 1
        }
        
        // 2. Initialize GCD with the first frequency
        // Get the frequency of the first unique card in the map.
        int result_gcd = freq_map.begin()->second;

        // 3. Calculate the GCD of all frequencies
        for (auto const& pair : freq_map) {
            int current_freq = pair.second;
            
            // Check for the impossible case: a single card of a certain number.
            if (current_freq == 1) {
                return false; // Cannot form groups of size x > 1 if any frequency is 1.
            }
            
            // Use std::gcd (or the manual helper) to update the running GCD.
            // Since C++17, std::gcd is available in <numeric>.
            result_gcd = std::gcd(result_gcd, current_freq);
        }

        // 4. Check the condition
        // The partition is possible if the GCD of all frequencies is greater than 1.
        return result_gcd > 1;
    }
};