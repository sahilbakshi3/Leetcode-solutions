class Solution {
public:
    
    int solve(vector<int> &nums, int i, int num){
        if(i == nums.size()){
            return num;
        }

        int take = solve(nums, i+1, num ^ nums[i]);
        int notake = solve(nums, i+1, num);

        return take + notake;
    }
    
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};