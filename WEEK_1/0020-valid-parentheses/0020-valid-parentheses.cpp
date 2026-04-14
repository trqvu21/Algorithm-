//https://leetcode.com/problems/valid-parentheses/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else {
                if ( st.empty() ) return false;
            
                char topchar = st.top();
                if ((c == ')' && topchar == '(') ||
                    (c == ']' && topchar == '[') ||
                    (c == '}' && topchar == '{') ) {
                    st.pop();
                    }
            
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};