class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int right = 0;

        for(int left = 0; left < n; left++){
            if(nums[left] != 0){
                swap(nums[left], nums[right]);
                right++;

            }


        }

    }
};