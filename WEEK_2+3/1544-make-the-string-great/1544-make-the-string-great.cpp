//https://leetcode.com/problems/squares-of-a-sorted-array/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    string makeGood(string s) {
  string kq;
  for(char c:s){
    if(!kq.empty() && abs(kq.back() - c) == 32){
        kq.pop_back();
    }
    else{
        kq.push_back(c);
    }
  }
  return kq;
    }

};