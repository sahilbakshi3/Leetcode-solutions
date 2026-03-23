class Solution {
public:
    
    long long solve(vector<int> &nums, vector<int> &cost, int mid){
        long long total = 0;

        for(int i = 0; i< nums.size(); i++){
            total += (long long)abs(nums[i] - mid) * cost[i];
        }
        return total;
    }
    
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long low = *min_element(nums.begin(), nums.end());
        long long high = *max_element(nums.begin(), nums.end());

        while(low <= high){
            long long mid = low + (high - low)/2;

            long long cost1 = solve(nums, cost, mid);
            long long cost2 = solve(nums, cost, mid + 1);

            if(cost1 > cost2){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        return solve(nums, cost, low);
    }
};