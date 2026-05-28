//https://leetcode.com/problems/contains-duplicate/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:

    int findMin(vector<int>& nums) {
        int min = nums[0];
        for(int i = 0; i<nums.size() ; i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return min;
    }
};