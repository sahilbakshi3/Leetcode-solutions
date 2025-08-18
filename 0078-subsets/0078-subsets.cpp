class Solution {
public:
    
    void solve(int i, int n, vector<vector<int>> &res, vector<int> &temp, vector<int> &nums){
        res.push_back(temp);

        for(int j = i; j< n; j++){
            temp.push_back(nums[j]);
            solve(j+1, n, res, temp, nums);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> res;

        vector<int> temp;

        solve(0, n, res, temp, nums);

        return res;

    }
};