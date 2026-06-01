class Solution {
public:

    int transform(int x, int a, int b, int c) {
        return a * x * x + b * x + c;
    }

    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {

        int n = nums.size();

        // Brute Force - O(n log n), O(n)
        //
        // vector<int> result;
        //
        // for(int x : nums){
        //     result.push_back(transform(x, a, b, c));
        // }
        //
        // sort(result.begin(), result.end());
        //
        // return result;


        // Better Solution
        //
        // Same as brute force since transforming all values
        // and sorting them is the most straightforward approach.
        //
        // vector<int> result(n);
        //
        // for(int i = 0; i < n; i++){
        //     result[i] = transform(nums[i], a, b, c);
        // }
        //
        // sort(result.begin(), result.end());
        //
        // return result;


        // Optimal Solution - O(n), O(n)

        vector<int> result(n);

        int left = 0;
        int right = n - 1;

        int index = (a >= 0) ? n - 1 : 0;

        while(left <= right) {

            int leftVal = transform(nums[left], a, b, c);
            int rightVal = transform(nums[right], a, b, c);

            if(a >= 0) {

                if(leftVal > rightVal) {
                    result[index--] = leftVal;
                    left++;
                } else {
                    result[index--] = rightVal;
                    right--;
                }

            } else {

                if(leftVal < rightVal) {
                    result[index++] = leftVal;
                    left++;
                } else {
                    result[index++] = rightVal;
                    right--;
                }
            }
        }

        return result;
    }
};
