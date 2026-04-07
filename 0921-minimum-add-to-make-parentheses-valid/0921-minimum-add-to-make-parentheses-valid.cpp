//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    int minAddToMakeValid(string s) {
       int x = 0;
       int y = 0;
       for (char c : s){
        if( c == '('){
            x++;
        }
        else{
            if (x > 0){
                x--;
            } else{
                y++;
            }
        }
       }
       return x + y;
    }
};