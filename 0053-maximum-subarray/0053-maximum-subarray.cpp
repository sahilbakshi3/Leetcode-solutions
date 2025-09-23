class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        // int maxSum = INT_MIN;

        // for(int i = 0; i< n; i++){
        //     int sum = 0;
        //     for(int j = i; j< n; j++){
        //         sum += nums[j];
        //         maxSum = max(maxSum, sum);
        //     }
        // }
        // return maxSum;

        int maxSum=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            if(sum<0) sum=0;            
        }
        return maxSum;

    }
};