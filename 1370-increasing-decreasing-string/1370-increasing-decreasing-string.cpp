//https://leetcode.com/problems/increasing-decreasing-string/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    string sortString(string s) {
        
        vector<int> freq(26, 0); 
        for (char c : s) {
            freq[c - 'a']++;
        }

        string result = "";
        int n = s.length();

      
        while (result.length() < n) {
            
            
            for (int i = 0; i < 26; i++) {
                if (freq[i] > 0) { 
                    result += (char)(i + 'a'); 
                    freq[i]--;                 
                }
            }

      
            for (int i = 25; i >= 0; i--) {
                if (freq[i] > 0) {
                    result += (char)(i + 'a');
                    freq[i]--;
                }
            }
        }

        return result;
    }
};