class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // The rowIndex-th row has (rowIndex + 1) elements.
        // We use 'long long' for intermediate calculations to prevent overflow,
        // although the final result elements are guaranteed to fit in an 'int' 
        // for typical constraints (e.g., rowIndex <= 33).
        std::vector<int> result;
        long long current_val = 1;

        // The first element (k=0) is always C(n, 0) = 1.
        result.push_back(1);

        // Iterate from k=1 up to rowIndex (n), calculating C(n, k)
        for (int k = 1; k <= rowIndex; ++k) {
            // Apply the formula: C(n, k) = C(n, k-1) * (n - k + 1) / k
            // current_val holds C(n, k-1)
            current_val = current_val * (rowIndex - k + 1) / k;
            
            // Push the calculated value (which should fit in 'int')
            result.push_back((int)current_val);
        }

        return result;
        
    }
};