class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int ans = 0, mini = nums[0];

        for(int i = n-1; i>=0; i--){
            ans += nums[i] - mini;
        }
        return ans;
    }
};