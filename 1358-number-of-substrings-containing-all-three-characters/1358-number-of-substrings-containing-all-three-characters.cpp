class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>st;
        int n=s.size();
        int count=0;
        int i=0;
        for(int j=0;j<n;j++){
            st[s[j]]++;
            while(st.size()==3){
                count+=(n-j);
                st[s[i]]--;
                if(st[s[i]]==0) st.erase(s[i]);
                i++;
                
            }
            

        }
        return count;
    }
};