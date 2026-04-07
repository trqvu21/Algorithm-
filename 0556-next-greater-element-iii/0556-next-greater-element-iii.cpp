//https://leetcode.com/problems/next-greater-element-iii/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    int nextGreaterElement(int n) {
     
        string s = to_string(n);
        int len = s.length();
       
        int i = len - 2;
        while (i >= 0 && s[i] >= s[i+1]) {
            i--;
        }

      
        if (i < 0) return -1;

        int j = len - 1;
        while (j >= 0 && s[j] <= s[i]) {
            j--;
        }

      
        swap(s[i], s[j]);

  
        reverse(s.begin() + i + 1, s.end());


        try {
            long long res = stoll(s); 
            if (res > INT_MAX) return -1;
            return (int)res;
        } catch (...) {
  
            return -1;
        }
    }
};