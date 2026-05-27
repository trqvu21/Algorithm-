class Solution {
public:
    bool isPerfectSquare(int num) {
        long long L = 1;
        long long R = num;

        while(L<=R){
            long long mid = L + (R-L) / 2;
            long long val = mid*mid;
            if (val == num){
                return true;
            } else if (val < num){
                L = mid + 1;
            }
            else{
                R = mid - 1;
            }
        }
        return false;
    }
};

