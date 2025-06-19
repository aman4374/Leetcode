class Solution {
public:
    string multiply(string num1, string num2) {
        
        if(num1 == "0" || num2 == "0") return "0";
        int m = num1.size(),n=num2.size();

        vector<int> res(m+n,0);
        for(int i=m-1;i>=0;i--){
            int d1 = num1[i]-'0';
            for(int j=n-1;j>=0;j--){
                int d2 = num2[j]-'0';
                int sum = d1*d2+res[i+j+1];
                res[i+j+1] = sum % 10;
                res[i+j] += sum/10;
            }
        }
        string prod;
        for(int num:res){
            if(!(prod.empty() && num == 0)){
                prod +=(num+'0');
            }
        }
        return prod.empty() ? "0" : prod;
    }
};