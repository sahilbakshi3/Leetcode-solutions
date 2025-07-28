class Solution {
public:
    
    int solve(vector<int> &nums, int target, int low, int high){
        if(low > high){
            return -1;
        }

        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            return solve(nums, target, mid + 1, high);

        }
        else{
            return solve(nums, target, low, mid - 1);
        }

    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // int low = 0, high = n-1;

        // while(low <= high){
        //     int mid = low + (high - low)/2;

        //     if(target == nums[mid]){
        //         return mid;
        //     }
        //     else if(target > nums[mid]){
        //         low = mid + 1;
        //     }
        //     else{
        //         high = mid - 1;
        //     }
        // }
        // return -1;

        return solve(nums, target, 0, n - 1);
    }
};