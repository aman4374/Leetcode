class Solution {
public:
string intToString(int num) {
    ostringstream oss;
    oss << num;
    return oss.str();
}
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
 vector<string> result;
    if (nums.empty()) return result;

    int start = nums[0];
    int end = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == end + 1) {
            end = nums[i];
        } else {
            if (start == end) {
                result.push_back(intToString(start));
            } else {
                result.push_back(intToString(start) + "->" + intToString(end));
            }
            start = nums[i];
            end = nums[i];
        }
    }

    if (start == end) {
        result.push_back(intToString(start));
    } else {
        result.push_back(intToString(start) + "->" + intToString(end));
    }

    return result;
    }
};