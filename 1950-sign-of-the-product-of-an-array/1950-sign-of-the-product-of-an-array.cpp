class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x = 1;

        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == 0) return 0;

            else if(nums[i] > 0) x *= 1;
            else{
                x *= -1;
            }
        }
        return x;
    }
};