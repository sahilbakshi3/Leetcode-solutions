class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
        int n = nums.size();
      
        sort(nums.begin(), nums.end());
        int ans = -1;

        for (int i = 0; i < n; i++) {
            int target = k - nums[i];

            int idx = lower_bound(nums.begin() + i + 1, nums.end(), target) - nums.begin();

            idx--;

            if (idx > i) {
                ans = max(ans, nums[i] + nums[idx]);
            }
        }

        return ans;
    }
};
