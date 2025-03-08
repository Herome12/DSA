#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();
        map<vector<int>, int> rowMap; // Using ordered map (supports vector keys)

        // Store row frequencies
        for (auto& row : grid) {
            rowMap[row]++;
        }

        // Check column occurrences in the row map
        for (int j = 0; j < n; j++) {
            vector<int> col;
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]); // Construct column as vector
            }
            count += rowMap[col];  // Add count of matching rows
        }

        return count;
    }
};
