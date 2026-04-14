//https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double total = 0;
        for (int i = 0; i < k; i++){
            total += nums[i];
        }
        double maxs = total;
        for (int i = k;i<nums.size();i++) {
        total = total + nums[i] - nums[i-k];
            maxs = max(maxs, total);
        }
        return maxs / k;
    }
};