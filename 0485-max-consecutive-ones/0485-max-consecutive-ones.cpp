class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, maxi = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                cnt++;
                if(maxi < cnt){
                    maxi = cnt;
                }
            }
            else{
                cnt = 0;
            }
        }
        return maxi;
    }
};