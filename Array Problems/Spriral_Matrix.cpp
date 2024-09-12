class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};  // Edge case

        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> ans(rows * cols);

        int index = 0, i = 0, j = 0;
        int rightBorder = cols - 1, leftBorder = 0;
        int downBorder = rows - 1, upBorder = 0;

        while (index < rows * cols) {
            // Move right
            while (j <= rightBorder && index < rows * cols) {
                ans[index++] = matrix[i][j++];
            }
            j--; i++; upBorder++;

            // Move down
            while (i <= downBorder && index < rows * cols) {
                ans[index++] = matrix[i++][j];
            }
            i--; j--; rightBorder--;

            // Move left
            while (j >= leftBorder && index < rows * cols) {
                ans[index++] = matrix[i][j--];
            }
            j++; i--; downBorder--;

            // Move up
            while (i >= upBorder && index < rows * cols) {
                ans[index++] = matrix[i--][j];
            }
            i++; j++; leftBorder++;
        }

        return ans;
    }
};