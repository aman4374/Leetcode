class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n = letters.size();        

        int ans = 0;
        for(int i=0;i<n;i++){
            cout << letters[i] - 'a' + 1 <<" ";

            if(letters[i] > target) return letters[i];
            
            //if(letters[i] < target) return letters[0];
        }
        return letters[0];
    }
};