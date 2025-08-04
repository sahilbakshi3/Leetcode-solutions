class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // Linear Search T.C ------> O(n) S.C-----> O(1);

        // for(int i = 0; i< n; i++){
        //     if(nums[i] == target){
        //         return i;
        //     }
        // }
        // return -1;

        // Binary Search T.C------> O(log n) S.C -------> O(1);
        // check which half is sorted left/right

        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                return mid;
            }
            // left half sorted

            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid - 1; 
                }
                else{
                    low = mid + 1;
                }
            }
            // right half sorted
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1; 
                }
            }

        }
        return -1;
    }
};