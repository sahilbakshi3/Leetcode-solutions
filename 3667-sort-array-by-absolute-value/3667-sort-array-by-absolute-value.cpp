class Solution {
public:
    vector<int> sortByAbsoluteValue(vector<int>& nums) {

        int n = nums.size();

        // Brute Force - O(n log n), O(n)
        //
        // vector<pair<int, int>> temp;
        //
        // for(int num : nums) {
        //     temp.push_back({abs(num), num});
        // }
        //
        // sort(temp.begin(), temp.end());
        //
        // vector<int> ans;
        //
        // for(auto &p : temp) {
        //     ans.push_back(p.second);
        // }
        //
        // return ans;


        // Better Solution - O(n log n), O(1)
        //
        // sort(nums.begin(), nums.end(),
        //      [](int a, int b) {
        //          return abs(a) < abs(b);
        //      });
        //
        // return nums;


        // Optimal Solution - O(n log n), O(1)

        sort(nums.begin(), nums.end(),
             [](int a, int b) {
                 return abs(a) < abs(b);
             });

        return nums;
    }
};
