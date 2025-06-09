class Solution {
public:
void markRow(vector<vector<int>>& matrix, int n, int m, int i) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0)
                matrix[i][j] = 101010; 
        }
    }

void markCol(vector<vector<int>>& matrix, int n, int m, int j) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] != 0)
                matrix[i][j] = 101010;  
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Step 1: Mark rows and columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    markRow(matrix, n, m, i);
                    markCol(matrix, n, m, j);
                }
            }
        }

        // Step 2: Replace marked cells with 0
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 101010) {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};