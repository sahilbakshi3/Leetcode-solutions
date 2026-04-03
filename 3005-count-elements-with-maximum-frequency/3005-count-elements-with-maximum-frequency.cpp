class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;

        }

        int maxi = -1;

        for(auto i : mp){
            maxi = max(maxi, i.second);
        }

        int tot = 0;

        for(auto i : mp){
            if(maxi == i.second) tot += i.second;
        }
        return tot;
    }
};