class Solution {
public:

    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
                                
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < nums2.size(); i++) {

            mp[nums2[i]].push_back(i);
        }

        vector<int> ans;

        for (int num : nums1) {

            int index = mp[num].back();

            mp[num].pop_back();

            ans.push_back(index);
        }

        return ans;
    }
};
