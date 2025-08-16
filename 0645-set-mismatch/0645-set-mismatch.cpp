class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;
        int dup, mis;

        for(auto it : nums){
            mp[it]++;
        }

        for(int i = 1; i<=n; i++){
            if(mp[i] == 2){
                dup = i;
            }
            else if(mp[i] == 0){
                mis = i;
            }
        }
        return {dup, mis};
    }
};