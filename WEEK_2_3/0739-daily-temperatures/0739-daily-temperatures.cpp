//https://leetcode.com/problems/asteroid-collision/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> res(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && T[i] > T[st.top()]) {
                int idx = st.top();
                st.pop();
                res[idx] = i - idx;
            }
            st.push(i);
        }

        return res;
    }
};
