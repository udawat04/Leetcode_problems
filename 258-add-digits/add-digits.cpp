class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while (num) {
            sum = sum + num % 10;

            num /= 10;

            if (sum > 9 && num == 0) {
                num = sum;
                sum = 0;
            }
        }
        return sum;
    }
};