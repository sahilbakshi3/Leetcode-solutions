class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();

        long long count = 0;

        // for(int i = 0; i< n; i++){
        //     for(int j = i+1; j< n; j++){
        //         long long sum = (long long)nums[i] + nums[j];

        //         if(sum >= lower && sum <= upper){
        //             count++;
        //         }
        //     }
        // }

        sort(nums.begin(), nums.end());

        for(int i = 0; i< n; i++){
            auto left = lower - nums[i];
            auto right = upper - nums[i];

            auto l = lower_bound(nums.begin() + i+ 1, nums.end(), left);
            auto r = upper_bound(nums.begin() + i+ 1, nums.end(), right);

            count += (r - l);

        }

        return count;
    }
};