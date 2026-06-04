class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {

        int n = nums.size();

        // Brute Force - O(n), O(1)
        //
        // int count = 0;
        //
        // for(int num : nums) {
        //     if(num == target) {
        //         count++;
        //     }
        // }
        //
        // return count > n / 2;


        // Better Solution - O(log n + k), O(1)
        //
        // int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        //
        // if(first == n || nums[first] != target) {
        //     return false;
        // }
        //
        // int count = 0;
        //
        // while(first < n && nums[first] == target) {
        //     count++;
        //     first++;
        // }
        //
        // return count > n / 2;


        // Optimal Solution - O(log n), O(1)

        int left =
            lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        int right =
            upper_bound(nums.begin(), nums.end(), target) - nums.begin();

        int count = right - left;

        return count > n / 2;
    }
};
