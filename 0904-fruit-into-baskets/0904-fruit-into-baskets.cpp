class Solution {
public:
   int totalFruit(vector<int>& fruits) {
    int a = -1, b = -1;
    int lastA = -1, lastB = -1;
    int i = 0, ans = 0;

    for (int j = 0; j < fruits.size(); j++) {
        int f = fruits[j];

        if (f == a) {
            lastA = j;
        }
        else if (f == b) {
            lastB = j;
        }
        else if (a == -1) {
            a = f;
            lastA = j;
        }
        else if (b == -1) {
            b = f;
            lastB = j;
        }
        else {
        
            if (lastA < lastB) {
                i = lastA + 1;
                a = f;
                lastA = j;
            } else {
                i = lastB + 1;
                b = f;
                lastB = j;
            }
        }

        ans = max(ans, j - i + 1);
    }
    return ans;
}

};