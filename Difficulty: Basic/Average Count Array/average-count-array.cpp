
class Solution {
  public:
    vector<int> countArray(vector<int>& arr, int x) {
        // Complete the function
        
        int n = arr.size();
        
        unordered_map<int, int> mp;
        
        for(auto &it: arr){
            mp[it]++;
        }
        
        vector<int> ans;
        for(auto &it: arr){
            int avg = (it + x) / 2;
            ans.push_back(mp[avg]);
        }
        
        return ans;
        
    }
};