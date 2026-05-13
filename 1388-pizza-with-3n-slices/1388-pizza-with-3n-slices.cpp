class Solution {
public:
    int calc(vector<int>& a, int choose) {
        int n = a.size();
        vector<vector<int>> dp(n + 1, vector<int>(choose + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= choose; j++) {
                int take = a[i - 1];
                if (i >= 2) take += dp[i - 2][j - 1];

                int notTake = dp[i - 1][j];

                dp[i][j] = max(take, notTake);
            }
        }

        return dp[n][choose];
    }

    int maxSizeSlices(vector<int>& slices) {
        int n = slices.size();
        int choose = n / 3;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n - 1; i++) {
            a.push_back(slices[i]);
        }

        for (int i = 1; i < n; i++) {
            b.push_back(slices[i]);
        }

        int ans1 = calc(a, choose);
        int ans2 = calc(b, choose);

        return max(ans1, ans2);
    }
};