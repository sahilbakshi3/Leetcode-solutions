class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        
        vector<pair<int, string>> ans;
        
        for(int i = 0; i < n; i++) {
            ans.push_back({heights[i], names[i]});
        }
        
        sort(ans.begin(), ans.end(), greater<>());
        
        vector<string> res;
        
        for(auto &p : ans) {
            res.push_back(p.second);
        }
        
        return res;
    }
};