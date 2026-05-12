class Solution {
public:
    bool isPossible(vector<int>& weights, int capacity, int days) {
        int requiredDays = 1;
        int currentWeight = 0;

        for (int weight : weights) {
            // Start new day if capacity exceeded
            if (currentWeight + weight > capacity) {
                requiredDays++;
                currentWeight = 0;
            }

            currentWeight += weight;
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (isPossible(weights, mid, days)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};