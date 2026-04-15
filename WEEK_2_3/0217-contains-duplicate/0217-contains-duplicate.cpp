//https://leetcode.com/problems/contains-duplicate/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n = nums.size() - 1;
       for(int i = 0 ; i < n; i++){
        if(nums[i+1] == nums[i]){
            return true;
        }
       }   
       return false;    
    }
};