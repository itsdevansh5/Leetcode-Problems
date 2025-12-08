class Solution {
public:
    int countTriples(int n) {
    unordered_map<int,int>s;
    for(int i=1;i<=n;i++){
        s[i*i]=i;
    }
    int count=0;
    for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
            int pr=j*j + k*k;
            if(s.find(pr)!=s.end())
            count++;
        }
    }
    return count;
        
    }
};