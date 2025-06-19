class Solution {
private:
    void bfs(int node, vector<vector<int>>& isConnected, vector<int>& vis) {
        vis[node] = 1;
        for (int i = 0; i < isConnected.size(); i++) {
            if (isConnected[node][i] == 1 && !vis[i]) {
                bfs(i, isConnected, vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                count++;
                bfs(i, isConnected, vis);
            }
        }
        return count;
    }
};
