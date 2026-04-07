//https://leetcode.com/problems/next-greater-element-i/description/?envType=problem-list-v2&envId=w5zahxti
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

      for (int i=0; i< nums1.size(); i++){
       int x = nums1[i];
       int res = -1;
       bool foundnewX = false; 
      
      for (int j = 0; j<nums2.size(); j++){
        if (nums2[j] == x){
         foundnewX = true;
        }
        if (foundnewX == true && nums2[j] > x){
            res = nums2[j];
            break;
        } 
      }
    result.push_back(res);
    }
    return result;
}
};
