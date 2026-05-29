class Solution {
public:
    
    int digitSum(int n){
        int sum = 0;

        while(n > 0){
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        int digit = 0;

        for(int i = 0; i< n; i++){
            sum += nums[i];
            digit += digitSum(nums[i]);
        }

        return abs(sum - digit);
        

    }
};