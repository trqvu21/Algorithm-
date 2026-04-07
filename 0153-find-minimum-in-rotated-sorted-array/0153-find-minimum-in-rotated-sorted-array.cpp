//https://leetcode.com/problems/contains-duplicate/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:

    int findMin(vector<int>& nums) {
  
        int min_val = nums[0]; 

 
        for (int i = 1; i < nums.size(); i++) {
            

            if (nums[i] < min_val) {
                
                min_val = nums[i];
            }
        }

        return min_val;
    }
};