class Solution {
public:
    
    bool check(int mid, vector<int> &nums, int p){
        int count = 0;

        for(int i = 0; i< nums.size()- 1; i++){
            if(nums[i+1] - nums[i] <= mid){
                count++;
                i++;
            }
        }

        return count >= p;
    }
    
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int low = 0, high = nums[n-1] - nums[0];

        int ans = high;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(mid, nums, p)){
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