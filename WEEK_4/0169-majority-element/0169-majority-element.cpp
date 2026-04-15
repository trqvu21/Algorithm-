class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int x = 0;
        for (int n : nums){
            if(count == 0 ){
                x = n;
            }
            if(n == x){
                count++;
            }
            else{
                count--;
            }
        }
        return x;
    }
};