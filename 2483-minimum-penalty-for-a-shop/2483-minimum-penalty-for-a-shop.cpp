class Solution {
public:
    int bestClosingTime(string customers) {
       int fine = 0;
    for (char c : customers) fine += (c == 'Y');

    int minfine = fine, idx = 0;

    for (int i = 0; i < customers.size(); ++i) {
        fine += (customers[i] == 'N');
        fine -= (customers[i] == 'Y');
        if (fine < minfine) {
            minfine = fine;
            idx = i + 1;
        }
    }
    return idx;
        
    }
};