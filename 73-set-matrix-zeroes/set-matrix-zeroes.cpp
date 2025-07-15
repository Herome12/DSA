class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<bool> rowZeroes(row, false);
        vector<bool> colZeroes(col, false);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    rowZeroes[i] = true;
                    colZeroes[j] = true;
                }
            }
        }

       
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (rowZeroes[i] || colZeroes[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
