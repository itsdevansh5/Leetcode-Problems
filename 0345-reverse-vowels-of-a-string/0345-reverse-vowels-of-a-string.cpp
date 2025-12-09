class Solution {
public:
    string reverseVowels(string s) {
        stack<char>st;
        set<int>m;
        set<char>v={'a', 'e', 'i', 'o','u','A','E','I','O','U'};
        for(int i=0;i<s.size();i++){
            if(v.find(s[i])!=v.end()){
            st.push(s[i]);
            m.insert(i);
            }
            
        }
        for(int i=0;i<s.size();i++){
            if(m.find(i)!=m.end()){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
        
    }
};