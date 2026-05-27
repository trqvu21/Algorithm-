class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        int l = 1;
        int r = x;
        int ans = 0;

        while (l<=r){
           long long mid = l + (r-l)/2;
           long long val = mid*mid;
           
           if (val <= x){
            ans = mid;
            l = mid + 1;
           } else {
            r = mid - 1;
           }

        }
        return ans;
         

        
    }
};