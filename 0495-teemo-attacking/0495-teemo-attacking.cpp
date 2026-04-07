//https://leetcode.com/problems/teemo-attacking/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        if (timeSeries.empty()) return 0;
        
        int totalTime = 0;
        
        // Duyệt từ đầu đến áp chót (chừa thằng cuối lại xử lý riêng)
        for (int i = 0; i < timeSeries.size() - 1; i++) {
            
            // Tính khoảng cách đến phát bắn tiếp theo
            int gap = timeSeries[i+1] - timeSeries[i];
            
          
            if (gap < duration) {
                totalTime += gap;      
            } else {
                totalTime += duration; 
            }
        }
        
        // Phát bắn cuối cùng luôn có tác dụng trọn vẹn
        totalTime += duration;
        
        return totalTime;
    }
};