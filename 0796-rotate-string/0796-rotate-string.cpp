//https://leetcode.com/problems/rotate-string/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length()) {
            return false;
        }

      
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s == goal) {
                return true;
            }

        
            s = s.substr(1) + s[0];
        }

        return false;
    }
};