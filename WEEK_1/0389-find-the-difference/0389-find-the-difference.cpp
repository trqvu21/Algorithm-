//https://leetcode.com/problems/find-the-difference/description/?envType=problem-list-v2&envId=w5s9pzgi
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS = 0;
        int sumT = 0;
        for (char c :  s){
            sumS = sumS + c;
        }
        for (char c : t){
            sumT = sumT + c;
        }
        return (char)(sumT - sumS);
    }
};