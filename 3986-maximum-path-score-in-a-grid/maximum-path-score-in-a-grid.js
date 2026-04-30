var maxPathScore = function(grid, k) {
    const m = grid.length;
    const n = grid[0].length;

    // initialize DP with -Infinity
    const dp = Array.from({ length: m }, () =>
        Array.from({ length: n }, () => Array(k + 1).fill(-Infinity))
    );

    
    const getCost = (val) => (val === 0 ? 0 : 1);

    
    let startCost = getCost(grid[0][0]);
    if (startCost <= k) {
        dp[0][0][startCost] = grid[0][0];
    }

    
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            for (let c = 0; c <= k; c++) {

                if (dp[i][j][c] === -Infinity) continue;

                
                if (j + 1 < n) {
                    let cost = getCost(grid[i][j + 1]);
                    let newCost = c + cost;

                    if (newCost <= k) {
                        dp[i][j + 1][newCost] = Math.max(
                            dp[i][j + 1][newCost],
                            dp[i][j][c] + grid[i][j + 1]
                        );
                    }
                }

                
                if (i + 1 < m) {
                    let cost = getCost(grid[i + 1][j]);
                    let newCost = c + cost;

                    if (newCost <= k) {
                        dp[i + 1][j][newCost] = Math.max(
                            dp[i + 1][j][newCost],
                            dp[i][j][c] + grid[i + 1][j]
                        );
                    }
                }
            }
        }
    }

    
    let ans = -Infinity;
    for (let c = 0; c <= k; c++) {
        ans = Math.max(ans, dp[m - 1][n - 1][c]);
    }

    return ans === -Infinity ? -1 : ans;
};