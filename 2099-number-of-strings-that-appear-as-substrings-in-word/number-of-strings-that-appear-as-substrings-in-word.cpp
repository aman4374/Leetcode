class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        vector<string> subString;

        for(int i=0;i<word.length();i++){
            string temp = "";
            for(int j=i;j<word.length();j++){
                temp +=word[j];
                subString.push_back(temp);
            }
        }

        for(string str:subString) {
            cout << str <<" ";
        }
        int count = 0;
        for(string pattern : patterns){
            for(string sub : subString){
                if( sub == pattern) {
                    count ++;
                    break;
                }
            }
        }

        return count;
    }
};