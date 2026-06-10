class Solution {
public:
    
    vector<vector<int>> ans;

    void solve(int idx, vector<int> &temp, vector<int> &nums){
        ans.push_back(temp);

        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i - 1]){
                continue;
            }

            temp.push_back(nums[i]);
            solve(i + 1, temp, nums);
            temp.pop_back();

        }
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        vector<int> temp;

        solve(0, temp, nums);

        return ans;
    }
};