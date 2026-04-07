//https://leetcode.com/problems/minimum-time-difference/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
 
        if (timePoints.size() > 1440) return 0;

        vector<int> minutes;

        //  Đổi hết sang phút
        for (string t : timePoints) {
            // Cắt chuỗi để lấy giờ và phút
            // t.substr(0, 2) lấy 2 ký tự đầu 
            // t.substr(3, 2) lấy 2 ký tự sau dấu hai chấm 
            int h = stoi(t.substr(0, 2)); // substr(pos, len)
            int m = stoi(t.substr(3, 2));
            minutes.push_back(h * 60 + m);
        }

        //  Sắp xếp tăng dần
        sort(minutes.begin(), minutes.end());

        //  Tìm min giữa các phần tử liền kề
        int min_diff = INT_MAX;
        
        for (int i = 1; i < minutes.size(); i++) {
            // Hiệu số giữa phần tử hiện tại và phần tử trước nó
            min_diff = min(min_diff, minutes[i] - minutes[i-1]);
        }

        // Xử lý trường hợp vòng tròn (Qua đêm)
        // Lấy (24h - thằng lớn nhất) + thằng nhỏ nhất
        // Ví dụ: 23:59 (1439) và 00:00 (0)
        // 1440 - 1439 + 0 = 1 phút
        int circle_diff = 1440 - minutes.back() + minutes.front();
        min_diff = min(min_diff, circle_diff);

        return min_diff;
    }
};