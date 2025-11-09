class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int a : asteroids) {
            bool destroyed = false;

            // Collision occurs only if the current asteroid is moving left
            // and the top of stack is moving right
            while (!st.empty() && a < 0 && st.top() > 0) {
                if (abs(st.top()) < abs(a)) {
                    // Top asteroid explodes, keep checking further
                    st.pop();
                    continue;
                } 
                else if (abs(st.top()) == abs(a)) {
                    // Both destroy each other
                    st.pop();
                }
                // Current asteroid gets destroyed
                destroyed = true;
                break;
            }

            if (!destroyed) st.push(a);
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
