class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;  // For BFS: stores coordinates of rotten oranges
        vector<vector<int>> time(n, vector<int>(m, 0)); // Time at which orange rots
        int freshCount = 0;

        // Step 1: Push all initially rotten oranges to the queue
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }

        int dx[4] = {-1, 1, 0, 0}; 
        int dy[4] = {0, 0, -1, 1}; 
        int maxTime = 0;

        
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();

            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];

                
                if (newX >= 0 && newX < n && newY >= 0 && newY < m &&
                    grid[newX][newY] == 1) {
                    
                    grid[newX][newY] = 2; 
                    q.push({newX, newY});
                    time[newX][newY] = time[x][y] + 1;
                    maxTime = max(maxTime, time[newX][newY]);
                    freshCount--;
                }
            }
        }

        
        return (freshCount == 0) ? maxTime : -1;
    }
};
