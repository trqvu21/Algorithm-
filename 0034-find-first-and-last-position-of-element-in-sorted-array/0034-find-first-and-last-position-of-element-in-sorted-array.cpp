class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size()-1;
       int first = -1;
       int last = -1;
       int L = 0;
       int R = n;
       while (L <= R){
        int mid = L + (R-L) / 2;
        if(nums[mid] == target){
            first = mid;
            R = mid -1;
        }
        else if (nums[mid] < target){
            L = mid +1;
        }
        else{
            R = mid -1;
        }
       }
       if (first == -1) return {-1, -1};

       L = first;
       R = n;
        while (L <= R){
        int mid = L + (R-L) / 2;
        if(nums[mid] == target){
            last = mid;
            L = mid +1;
        }
        else if (nums[mid] < target){
            L = mid +1;
        }
        else{
            R = mid -1;
        }
       }
       return {first, last};
    }
};