class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> diagonals(m+n-1);
        vector<int> result;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diagonals[i+j].push_back(mat[i][j]);
            }
        }

        // Step 2: Traverse diagonals
    for (int k = 0; k < diagonals.size(); ++k) {
        if (k % 2 == 0) {
            // Reverse order manually for even index
            for (int i = diagonals[k].size() - 1; i >= 0; --i) {
                result.push_back(diagonals[k][i]);
            }
        } else {
            // Normal order
            for (int i = 0; i < diagonals[k].size(); ++i) {
                result.push_back(diagonals[k][i]);
            }
        }
    }
    return result;
    }
};