//https://leetcode.com/problems/group-anagrams/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs){
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> kq;
      for (auto &p : mp) {
        kq.push_back(p.second);
      }
      return kq;
    }
};