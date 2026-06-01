class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {

        int n = nums.size();

        // Brute Force - O(n^3), O(1)
        //
        // int count = 0;
        //
        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         for(int k = j + 1; k < n; k++){
        //             if(nums[i] + nums[j] + nums[k] < target){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        //
        // return count;


        // Better Solution - O(n^2 log n), O(1)
        //
        // sort(nums.begin(), nums.end());
        // int count = 0;
        //
        // for(int i = 0; i < n - 2; i++){
        //     for(int j = i + 1; j < n - 1; j++){
        //
        //         int remain = target - nums[i] - nums[j];
        //
        //         int idx = lower_bound(
        //             nums.begin() + j + 1,
        //             nums.end(),
        //             remain
        //         ) - nums.begin();
        //
        //         count += idx - (j + 1);
        //     }
        // }
        //
        // return count;


        // Optimal Solution - O(n^2), O(1)

        sort(nums.begin(), nums.end());

        int count = 0;

        for(int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while(left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if(sum < target) {

                    count += (right - left);

                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return count;
    }
};
