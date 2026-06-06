class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();

        int prefix = 0;
        int maxi = 0;
        int mini = 0;

        for(int i = 0; i< n; i++){
            prefix += nums[i];
            maxi = max(maxi, prefix);
            mini = min(mini, prefix);
        }

        return maxi - mini;
    }
};