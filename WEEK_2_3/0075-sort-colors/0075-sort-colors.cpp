//https://leetcode.com/problems/sort-colors/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    void sortColors(vector<int>& nums) {
     int low = 0; int mid = 0; int high = nums.size()-1;
     for(int i = 0; i <nums.size(); i++){
        if(nums[mid] == 0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
     }
    }
}; 