#include <vector>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count = 0;
        int rows = grid.size();
        int columns = grid[0].size();

        for (int i = 0; i < rows; i++) {  // Iterate over rows
            for (int j = 0; j < columns; j++) {  // Iterate over columns
                bool match = true;

                // Compare the i-th row with the j-th column
                for (int k = 0; k < rows; k++) {
                    if (grid[i][k] != grid[k][j]) {
                        match = false;
                        break;
                    }
                }

                if (match) count++;
            }
        }
        return count;
    }
};
