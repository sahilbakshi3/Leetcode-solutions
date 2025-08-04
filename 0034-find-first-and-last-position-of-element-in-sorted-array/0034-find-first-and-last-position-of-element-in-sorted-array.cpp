class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        // Linear Search

        int first = -1, last = -1;

        // for(int i = 0; i< n; i++){
        //     if(nums[i] == target){
        //         first = i;
        //         break;
        //     }
        // }

        // for(int i = n-1; i>=0; i--){
        //     if(nums[i] == target){
        //         last = i;
        //         break;
        //     }
        // }

        // Binary Search T.C-------->O(log n);
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] >= target){
                high = mid -1;
                if(nums[mid] == target){
                    first = mid;
                }
            }
            else{
                low = mid + 1;
            }
        }

        low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] <= target){
                low = mid + 1;
                if(nums[mid] == target){
                    last = mid;
                }
            }
            else{
                high = mid - 1;
            }

        }
        return {first, last};
    }
};