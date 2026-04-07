//https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    int minTimeToType(string word) {
        char current_pos = 'a'; // Con trỏ bắt đầu từ 'a'
        int total_rotations = 0;
        for (char c : word) {
        // Tính khoảng cách trị tuyệt đối (đi xuôi)
        int dist = abs(current_pos - c);

        int min_step = min(dist, 26 - dist);

        total_rotations += min_step;
        total_rotations ++;
        // Cập nhật vị trí hiện tại sau khi xoay xong
        current_pos = c;
    }
return total_rotations;
    }
};