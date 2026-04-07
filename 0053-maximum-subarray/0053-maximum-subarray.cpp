
//https://leetcode.com/problems/maximum-subarray/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  
        int max_sum = nums[0];
        int current_sum = nums[0];

        // Duyệt từ phần tử thứ 2 trở đi
        for (int i = 1; i < nums.size(); i++) {
            

            
            current_sum = max(nums[i], current_sum + nums[i]);

            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};