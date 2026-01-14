class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        for(auto &it: nums2){
            if(s1.find(it) != s1.end()){
                s1.erase(it);
                s2.erase(it);
            }
        }

        return {vector<int> (s1.begin(), s1.end()), vector<int> (s2.begin(), s2.end())};

    }
};