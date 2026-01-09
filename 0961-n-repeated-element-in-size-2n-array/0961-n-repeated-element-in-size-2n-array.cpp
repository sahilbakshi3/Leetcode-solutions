class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;

        for(auto &it: nums){
            mp[it]++;
        }

        int res = 0;

        for(auto &it: mp){
            if(it.second > 1){
                if(it.second*2 == n){
                    res = it.first;
                }
            }
        }
        return res;
    }
};