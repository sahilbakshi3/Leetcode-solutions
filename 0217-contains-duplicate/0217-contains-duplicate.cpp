class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i< n-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;

        // map<int, int> mp;

        // for(auto it: nums){
        //     mp[it]++;
        // }
        // for(auto it: mp){
        //     if(it.second > 1){
        //         return true;
        //     }
        // }
        // return false;
        
        set<int> s;

        for(int i = 0; i< n; i++){
            s.insert(nums[i]);
        }
        if(s.size() < n){
            return true;
        }
        else{
            return false;
        }

    }
};