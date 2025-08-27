class Solution {
public:
    int myAtoi(string s) {
        stringstream ss(s);
        char c;
        ss>>c;
        if((c!='+')&&(c!='-')&&(((int)c<48)||((int)c>57))){
            return 0;
        }
        ss.clear();
        ss.str(s);
        ss.seekg(0);
        long long n;
        ss>>n;
        if(n>INT_MAX)
        return INT_MAX;
        if(n<INT_MIN)
        return INT_MIN;
        return n;


        
    }
};