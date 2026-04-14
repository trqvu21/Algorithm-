//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int kq = 0;
        for(int right = 0; right < s.size(); right++){
            while(st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            kq = max(kq, right - left + 1);
        }
        return kq;
    }
};