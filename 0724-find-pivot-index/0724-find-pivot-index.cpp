class Solution {
public:
    
    int rsum(vector<int> &nums){
        int sum = 0;

        for(int i = 0; i< nums.size(); i++){
            sum += nums[i];
        } 
        return sum;
    }
    
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int leftSum = 0, rightSum = rsum(nums);

        for(int i = 0; i< n; i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        } 
        return -1;  
    }
};