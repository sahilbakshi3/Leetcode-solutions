class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(auto &it: arr){
            mp[it]++;
        }

        unordered_set<int> res;

        for(auto &it: mp){
            res.insert(it.second);
        }

        return mp.size() == res.size();

    }
};