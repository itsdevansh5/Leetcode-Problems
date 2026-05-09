class Solution {
public:
    int func(string s){
        char a='z';
        for(char t:s){
            a=min(a,t);
        }
        int count=0;
        for(char t:s){
            if(t==a) count++;
        }
        return count;
    }
    int calc(vector<int>& num,int comp){
        int l=0;
        int h=num.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(num[mid]<=comp) l=mid+1;
            else h=mid-1;
        }
        return num.size()-l;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int m=queries.size();
        int n=words.size();
        vector<int>res(m);
        vector<int>num(n);
        for(int i=0;i<n;i++) num[i]=func(words[i]);
        std::sort(num.begin(),num.end());
        for(int i=0;i<m;i++){
            int comp=func(queries[i]);
            int r=calc(num,comp);
            res[i]=r;

        }
        return res;
        
    }
};