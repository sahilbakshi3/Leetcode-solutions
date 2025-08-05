class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();

        // unordered_map<int, int> mp;
        // vector<int> ans;

        // for(auto it: nums){
        //     mp[it]++;
        // }

        // for(auto it: mp){
        //     if(it.second == 2){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;

        vector<int> ans;

        for(int i = 0; i< n; i++){

            int num = abs(nums[i]);
            int idx = num - 1;

            if(nums[idx] < 0){
                ans.push_back(num);
            }
            else{
                nums[idx] *= -1;
            }

        }
        return ans;
    }
};