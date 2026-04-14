//https://leetcode.com/problems/ransom-note/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> x(26,0);
        for (char c : magazine) {
            x[c - 'a']++;
            
        }
        for (char c : ransomNote) {
            if (x[c - 'a'] == 0) {
                return false;
            }
            else{
                x[c - 'a']--;
            }
        }
        return true;
    }
};