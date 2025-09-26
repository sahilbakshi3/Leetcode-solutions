class Solution {
public:
    
    int binarySearch(vector<int> &nums, int l, int r, int target){
        int k = -1;

        while(l <= r){
            int mid = l + (r-l)/2;

            if(nums[mid] < target){
                k = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;

            }
        }
        return k;
    }
    
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();

        // int cnt = 0;

        // for(int i = 0; i< n-2; i++){
        //     for(int j = i+1; j< n-1; j++){
        //         for(int k = j+1; k < n; k++){
        //             if(nums[i] + nums[j] > nums[k] &&
        //                 nums[j] + nums[k] > nums[i] &&
        //                 nums[k] + nums[i] > nums[j]
        //             ){
        //                 cnt++;
        //             }
        //         }
        //     }
        // }
        // return cnt;

        if(n < 3){
            return 0;
        }

        sort(nums.begin(), nums.end());

        int cnt = 0;

        // for(int i = 0; i< n; i++){
        //     if(nums[i] == 0){
        //         continue;
        //     }
        //     for(int j = i+1; j< n; j++){
        //         int sum = nums[i] + nums[j];

        //         int k = binarySearch(nums, j+1, n-1, sum);

        //         if(k != -1){
        //             cnt += (k - j);
        //         }
        //     }
        // }

        for (int k = n-1; k >= 2; k--){
            int i = 0, j = k-1;

            while(i < j){
                if(nums[i] + nums[j] > nums[k]){
                    cnt += (j - i);
                    j--;
                }
                else{
                    i++;
                }
            }
        }

        return cnt;
    }
};