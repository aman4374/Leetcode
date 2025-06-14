class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int delCount = 0;
        int rows = strs.size();
        int cols = strs[0].size();

        for(int col=0;col<cols;col++){
            for(int row=1;row<rows;row++){
                if(strs[row][col] < strs[row-1][col]){
                    delCount++;
                    break;
                }
            }
        }
        return delCount;
    }
};