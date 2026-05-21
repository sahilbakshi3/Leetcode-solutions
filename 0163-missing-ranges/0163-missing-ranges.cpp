class Solution {
public:

    string makeRange(long long start, long long end) {

        if (start == end) {
            return to_string(start);
        }

        return to_string(start) + "->" + to_string(end);
    }

    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {

        vector<string> ans;

        long long prev = (long long)lower - 1;

        for (int i = 0; i <= nums.size(); i++) {

            long long curr = (i == nums.size()) ? (long long)upper + 1 : nums[i];

            if (curr - prev >= 2) {
                ans.push_back(makeRange(prev + 1, curr - 1));
            }

            prev = curr;
        }

        return ans;
    }
};
