class Solution {
public:
    string largestGoodInteger(string num) {
    string maxGood = "";
    
    for (int i = 0; i <= num.size() - 3; i++) {
        if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
            string currentGood = num.substr(i, 3);
            if (currentGood > maxGood) {
                maxGood = currentGood;
            }
        }
    }
    return maxGood;
} 

};