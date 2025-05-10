class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> edgecount;

        for(auto row : wall){
            long long int sum = 0;
            for(int i=0;i<row.size()-1;i++) {
                sum +=row[i];
                edgecount[sum]++;
            }
        }
        int maxedge = 0;
        for(auto it:edgecount){
            maxedge = max(maxedge,it.second);
        }
        return wall.size() - maxedge;
    }
};