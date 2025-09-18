class Solution {
public:
    
    // bool solve(int i, vector<int> &nums){
    //     int n = nums.size();
    //     if(i == n-1){
    //         return true;
    //     }

    //     int further = min(n-1, i + nums[i]);

    //     for(int j = i+1; j<=further; j++){
    //         if(solve(j, nums)){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        // return solve(0, nums);

        int maxIdx = 0;

        for(int i = 0; i< n; i++){
            if(i > maxIdx){
                return false;
            }
            else{
                maxIdx = max(maxIdx, i+nums[i]);
            }
        }
        return true;
    }
};