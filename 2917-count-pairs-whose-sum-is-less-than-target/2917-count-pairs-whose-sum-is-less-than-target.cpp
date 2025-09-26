class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();

        int cnt = 0;

        // for(int i = 0; i< n-1; i++){
        //     for(int j = i+1; j< n; j++){
        //         if(nums[i] + nums[j] < target){
        //             cnt++;
        //         }
        //     }
        // }

        sort(nums.begin(), nums.end());
        int i = 0, j = n-1;
        
        while(i < j){
            if(nums[i] + nums[j] < target){
                cnt += abs(i-j);
                i++;
            }
            else{
                j--;
            }
        }

        return cnt;
    }
};