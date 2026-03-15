class Solution {
public:
    
    bool check(vector<int> &nums, int mid, int maxOperations){
        int operationNeeded = 0;

        for(auto &it: nums){
            operationNeeded += (it + mid - 1)/mid - 1;
            if(operationNeeded > maxOperations){
                return false;
            }
        }
        return operationNeeded <= maxOperations;
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int ans = -1;

        while(low <= high){

            int mid = low + (high - low)/2;

            if(check(nums, mid, maxOperations)){
                ans = mid;
                high = mid - 1;

            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};