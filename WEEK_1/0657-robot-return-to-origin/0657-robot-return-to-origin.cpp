//https://leetcode.com/problems/robot-return-to-origin/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for ( char c : moves ) {
            if (c == 'U') {
                x++;
            }
            else if (c == 'D') {
                x--;
            }
            else if (c == 'R') {
                y++;
            }
            else if (c == 'L') {
                y--;
            }
        }
        return (x == 0 && y == 0);
    }
};