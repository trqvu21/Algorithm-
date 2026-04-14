//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>> st;

        for (char c : s) {
            if (!st.empty() && st.back().first == c) {
                st.back().second++;
                if (st.back().second == k) {
                    st.pop_back();
                }
            } else {
                st.push_back({c, 1});
            }
        }

        string res = "";
        for (auto &p : st) {
            res.append(p.second, p.first);
        }

        return res;
    }
};
