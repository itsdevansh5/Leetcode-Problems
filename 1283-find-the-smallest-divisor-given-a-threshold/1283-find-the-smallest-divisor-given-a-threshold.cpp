class Solution {
public:

    int getSum(const vector<int>& nums, int d, int threshold) {

        int sum = 0;

        for(int x : nums) {

            sum += (x + d - 1) / d;

            if(sum > threshold)
                return sum;
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int l = 1;
        int h = *max_element(nums.begin(), nums.end());

        while(l < h) {

            int mid = l + (h - l) / 2;

            if(getSum(nums, mid, threshold) <= threshold)
                h = mid;
            else
                l = mid + 1;
        }

        return l;
    }
};