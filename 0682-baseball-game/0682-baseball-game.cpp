class Solution {
public:
    int calPoints(vector<string>& operations) {
         vector<int> record;
    for (const string& op : operations) {
        if (op == "+") {
            int sum = record[record.size() - 1] + record[record.size() - 2];
            record.push_back(sum);
        } else if (op == "D") {
            int doubleLast = 2 * record.back();
            record.push_back(doubleLast);
        } else if (op == "C") {
            record.pop_back();
        } else {
            record.push_back(stoi(op));
        }
    }
    int total = 0;
    for (int score : record) {
        total += score;
    }
    return total;
    }
};