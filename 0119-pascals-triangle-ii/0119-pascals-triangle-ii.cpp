#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        // The rowIndex-th row has (rowIndex + 1) elements.
        // Initialize the result vector.
        std::vector<int> result;

        // The first element C(n, 0) is always 1.
        result.push_back(1);

        // We use a long long to store the current element value 
        // to prevent overflow during intermediate multiplication, 
        // as the problem constraints usually allow the final result
        // to fit within a standard 32-bit signed integer.
        long long current_val = 1;

        // Iterate from k=1 up to rowIndex (n), calculating C(n, k)
        for (int k = 1; k <= rowIndex; ++k) {
            // Apply the formula C(n, k) = C(n, k-1) * (n - k + 1) / k
            
            // Step 1: Multiplication (Potential point of overflow, use long long)
            current_val = current_val * (rowIndex - k + 1);
            
            // Step 2: Division (Guaranteed to be an integer)
            current_val = current_val / k;
            
            // The result is added to the vector.
            result.push_back((int)current_val);
        }

        return result;
    }
};