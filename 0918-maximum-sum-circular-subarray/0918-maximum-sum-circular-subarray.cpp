class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int currMin = 0, currMax = 0, maxi = INT_MIN, mini = INT_MAX;

        int sum = 0;

        for(int i = 0; i< n; i++){
            sum += nums[i];

            currMax = max(nums[i], currMax + nums[i]);
            maxi = max(maxi, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            mini = min(mini, currMin); 

        }

        if(maxi < 0){
            return maxi;
        }

        return max(maxi, sum - mini);
    }
};