class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> freq;

        for(char c:s){
            freq[c]++;
        }
        string res;

        for(char c:order){
            while(freq[c] > 0){
                res +=c;
                freq[c]--;
            }
        }
        for(auto pair : freq){
            res.append(pair.second,pair.first);
        }
        return res;
    }
};