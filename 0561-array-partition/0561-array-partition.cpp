//https://leetcode.com/problems/array-partition/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        int sums=0;
        for(int i=0;i<nums.size();i+=2){
            sums+=nums[i];
        }
    
    return sums;
    }
};
