class Solution {
public:
    
    vector<vector<int>> res;

    void solve(vector<int> &nums, int idx, int n){
        if(idx >= n){
            res.push_back(nums);
            return ;
        }

        for(int i = idx; i < n; i++){
            swap(nums[idx], nums[i]);
            solve(nums, idx+ 1, n);
            swap(nums[idx], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();

        solve(nums, 0, n);

        return res;

    }
};