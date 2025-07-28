class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();

        // int n = nums.size();
        // for(int i=0; i<n-1; i++){
        //     if(nums[i] > nums[i+1]){
        //         return i;
        //     }
        // }
        // return n-1;

        // return max_element(nums.begin(), nums.end()) - nums.begin();

        int low = 0, high = n-1;

        while(low < high){
            int mid = low + (high - low)/2;

            if(nums[mid] < nums[mid +1]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};