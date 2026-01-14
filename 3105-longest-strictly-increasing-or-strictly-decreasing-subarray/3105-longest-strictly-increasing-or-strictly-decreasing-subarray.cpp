class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();

        int maxi = 1;
        int inLen = 1;
        int decLen = 1;

        for(int i = 1; i< n; i++){
            if(nums[i] > nums[i-1]){
                inLen++;
                decLen = 1;
            }
            else if(nums[i] < nums[i-1]){
                decLen++;
                inLen = 1;
            }
            else{
                inLen = 1;
                decLen = 1;
            }

            maxi = max(maxi, max(inLen, decLen));
        }

        return maxi;
    }
};