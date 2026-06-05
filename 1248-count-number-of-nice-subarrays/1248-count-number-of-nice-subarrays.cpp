class Solution {
public:
    
    int solve(vector<int> &nums, int k){
        int n = nums.size();

        int left = 0, ans = 0;
        int sum = 0;

        for(int right = 0; right < n; right++){
            sum += nums[right] % 2;

            while(sum > k){
                sum -= nums[left] % 2;
                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
    }
};