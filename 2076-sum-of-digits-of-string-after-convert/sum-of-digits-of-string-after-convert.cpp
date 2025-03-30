class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int getLucky(string s, int k) {

        int n = s.size();
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s[i] - 'a' + 1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
            sum += arr[i];
        }
        cout << sum;
        cout << endl;

        string str = "";
        for (int num : arr) {
            str += to_string(num);
        }
        cout << str << "";
        cout << endl;

        int sum2 = 0;
        for (char ch : str) {
            sum2 += ch - '0';
        }
        cout << sum2 << " ";

        // Step 3: Perform k-1 additional transformations
        for (int i = 1; i < k; i++) {
            sum2 = sumOfDigits(sum2);
        }

        return sum2;
    }
};