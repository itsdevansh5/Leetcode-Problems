class Solution {
public:
    long long sumAndMultiply(int n) {
        string a=to_string(n);
        string b;
        long long sum=0;
        for(auto i:a){
            if(i!='0'){
            b+=i;
            sum+=(i-'0');
            }
        }
        if(b.empty())
        b="0";
        int ans=stoi(b);
        return ans*sum;

    }
};