class Solution {
public:

    int reversenum(int n){
        int rev = 0;

        while(n > 0) {
            rev = rev * 10 + n % 10;
            n = n/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = reversenum(num);
        int rev2 = reversenum(rev1);

        return rev2 == num;
    }
};