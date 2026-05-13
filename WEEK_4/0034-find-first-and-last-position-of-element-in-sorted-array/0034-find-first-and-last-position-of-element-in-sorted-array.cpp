class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = -1;
        int right = -1;

        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target) r = mid - 1;
            else l = mid + 1;
        }

        if (l < n && nums[l] == target) left = l;
        else return {-1, -1};

        l = 0;
        r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= target) l = mid + 1;
            else r = mid - 1;
        }

        right = r;
        return {left, right};
    }
};