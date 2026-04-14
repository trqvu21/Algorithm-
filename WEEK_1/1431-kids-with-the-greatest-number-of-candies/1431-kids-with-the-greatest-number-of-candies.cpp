//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int maxcandy = 0;
     for( int candy : candies){
        if (candy > maxcandy){
            maxcandy = candy;
        }
     }
     vector<bool> res;
     for (int candy : candies){
     if (candy + extraCandies >= maxcandy){
        res.push_back(true);
       } else{
        res.push_back(false);
        }
     
     }
     return res;
    }
};
