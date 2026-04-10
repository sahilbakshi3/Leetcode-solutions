class Solution {
public:

    int mod = 1e9 + 7;

    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        long long ans = 0, low = 0, high = n-1;

        vector<int> power(n);
        power[0] = 1;

        for(int i = 1; i< n; i++){
            power[i] = (power[i-1] * 2)%mod;
        }

        while(low <= high){
            if(nums[low] + nums[high] <= target){
                ans = (ans + power[high - low]) % mod;
                low++;

            }
            else{
                high--;
            }
        }

        return ans;

    }
};