class Solution {
public:
    int gcd(int a, int b) {
        while (b) {
            a %= b;
            std::swap(a, b);
        }
        return a;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>m;
        for(auto i:deck){
            m[i]++;
        }
        vector<int>n;
        for(auto i:m){
            n.push_back(i.second);
        }
        int curr=n[0];
        for(auto i:n){
            int g=gcd(curr,i);
            curr=g;
        }
        if(curr>1)
        return true;
        else
        return false;


        
    }
};