/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        int l=1;
        vector<vector<int>>res;
        int h=z;
        while(l<=z && h>=1){
            if(customfunction.f(l,h)==z){
                res.push_back({l,h});
                l++;
                h--;
            }
            else if(customfunction.f(l,h)>z) h--;
            else l++;
        }
        return res;
    }
};