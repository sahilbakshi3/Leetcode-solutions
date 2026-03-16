class Solution {
public:
    
    int solve(vector<int> &nums, int mid){
        int count = 0, left = 0;
        int n = nums.size();

        for(int right = 1; right < n; right++){
            while(nums[right] - nums[left] > mid){
                left++;
            }
            count += right - left;
        }

        return count;
    }
    
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();

        // vector<int> res;

        // for(int i = 0; i< n; i++){
        //     for(int j = i+1; j< n; j++){
        //         res.push_back(abs(nums[i] - nums[j]));
        //     }
        // }
        // sort(res.begin(), res.end());

        // return res[k-1];

        // priority_queue<int, vector<int>, greater<int>> heap;

        // for(int i = 0; i< n; i++){
        //     for(int j = i+1; j< n; j++){
        //         heap.push(abs(nums[i] - nums[j]));
        //     }
        // }

        // for(int i = 0; i< k - 1; i++){
        //     heap.pop();
        // }
        // return heap.top();

        sort(nums.begin(), nums.end());

        int low = 0, high = nums[n-1] - nums[0];

        int ans = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(solve(nums, mid) >= k){
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