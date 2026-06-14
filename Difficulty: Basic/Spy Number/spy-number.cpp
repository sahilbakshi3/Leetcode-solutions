class Solution {
  public:
    bool checkSpy(int n) {
        // code here
        int digit_sum = 0;
        int digit_product = 1;
        
        while (n > 0) {
            int digit = n % 10;
            digit_sum += digit;
            digit_product *= digit;
            n /= 10;
        }
        
        return digit_sum == digit_product;
    }
};
