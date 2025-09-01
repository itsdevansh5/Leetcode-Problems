class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        stack<char>st;
        vector<int>v{0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                max++;
                v.push_back(max);
            }
            if(s[i]==')'){
                st.pop();
                max--;
            }



        }
      std::sort(v.begin(),v.end());
      return *(v.end()-1);

        
    }
};