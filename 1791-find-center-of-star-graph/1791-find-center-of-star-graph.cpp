class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();

        unordered_map<int, int> mp;

        for(auto &it: edges){
            int u = it[0];
            int v = it[1];

            mp[u]++;
            mp[v]++;

        }

        for(auto &it: mp){
            if(it.second == edges.size()){
                return it.first;
            }
        }

        return -1;

    }
};