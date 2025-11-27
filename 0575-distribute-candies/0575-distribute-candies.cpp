class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s(candyType.begin(),candyType.end());
        int m=s.size();
        int n=candyType.size()/2;
        return min(m,n);
    }
};