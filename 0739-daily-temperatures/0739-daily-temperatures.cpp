class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int m=temperatures.size();
        vector<int>res(m);
        stack<std::pair<int,int>>st;

        for(int j=m-1;j>=0;j--){
            int v=temperatures[j];

            while(!st.empty() && st.top().first<=v){
                st.pop();
            }
            if(!st.empty()) res[j]=(st.top()).second-j;
            
            st.push({v,j});
        }
        return res;

    }
};