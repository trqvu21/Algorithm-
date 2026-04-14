//https://leetcode.com/problems/largest-number/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;

        // 1. Convert int -> string
        for (int x : nums) {
            s.push_back(to_string(x));
        }

        // 2. Sort with special comparator
        sort(s.begin(), s.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        // 3. If largest is "0", return "0"
        if (s[0] == "0") return "0";

        // 4. Concatenate
        string res = "";
        for (string &x : s) {
            res += x;
        }

        return res;
    }
};
