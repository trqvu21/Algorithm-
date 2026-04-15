//https://leetcode.com/problems/asteroid-collision/description/?envType=problem-list-v2&envId=w5srjw5v
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int ast : asteroids){
            bool IsExploded = false;
            while(!st.empty() && ast < 0 && st.back() > 0){
                if (st.back() < -ast){
                    st.pop_back();
                    continue;
                }
                else if (st.back() == -ast){
                    st.pop_back();
                    IsExploded = true;
                    break;
                }
                else{
                    IsExploded = true;
                    break;
                }

            }
            if (IsExploded == false){
                st.push_back(ast);
            }
        }
        return st;
    }
};
