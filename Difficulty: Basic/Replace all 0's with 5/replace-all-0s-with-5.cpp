/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        if(n == 0) return 5;
        
        int res = 0;
        int place = 1;
        
        while(n > 0){
            int digit = n % 10;
            if(digit == 0){
                digit = 5;
            }
            
            res += digit * place;
            place *= 10;
            n /= 10;
            
        }
        
        return res;
    }
};