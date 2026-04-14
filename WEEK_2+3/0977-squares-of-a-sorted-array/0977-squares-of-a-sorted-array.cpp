//https://leetcode.com/problems/squares-of-a-sorted-array/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      for(int& x:nums){
        x = x*x;
      }
      sort(nums.begin(),nums.end());
      return nums;
    }
};
