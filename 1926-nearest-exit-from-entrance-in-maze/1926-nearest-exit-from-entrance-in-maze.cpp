class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();

        queue<pair<pair<int, int>, int>> q;
        q.push({{entrance[0], entrance[1]}, 0});
        maze[entrance[0]][entrance[1]] = '+';

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        while (!q.empty()) {
            auto cur = q.front();
            q.pop();

            int x = cur.first.first;
            int y = cur.first.second;
            int d = cur.second;

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n && maze[nx][ny] == '.') {
                    if (nx == 0 || nx == m - 1 || ny == 0 || ny == n - 1) {
                        return d + 1;
                    }

                    maze[nx][ny] = '+';
                    q.push({{nx, ny}, d + 1});
                }
            }
        }

        return -1;
    }
};