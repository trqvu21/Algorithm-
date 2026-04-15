//https://leetcode.com/problems/third-maximum-number/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(), greater<int>());
        int count = 1;
        int root  = nums[0];
        for(int i=0; i<nums.size() ; i++){
            if(nums[i] != root){
                count++;
                root = nums[i];
            }
            if (count == 3){
                return nums[i];
            }
        }
        return nums[0];
    }
};
