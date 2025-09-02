class Solution {
public:
    int romanToInt(string s) {
        static const unordered_map<char, int> roman = {
            {'I',1}, {'V',5}, {'X',10}, {'L',50},
            {'C',100}, {'D',500}, {'M',1000}
        };

        int result = 0;
        int prev = 0;

        for (int i = s.size() - 1; i >= 0; --i) {
            int curr = roman.at(s[i]);
            if (curr < prev) {
                result -= curr;
            } else {
                result += curr;
            }
            prev = curr;
        }

        return result;
    }
};
