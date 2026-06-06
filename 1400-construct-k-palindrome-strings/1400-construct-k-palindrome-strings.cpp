class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();

        if(k > n) return false;

        vector<int> mp(26, 0);
        for(auto &it: s){
            mp[it - 'a']++;
        }

        int cnt = 0;

        for(auto &it: mp){
            if(it % 2){
                cnt++;
            }
        }

        return cnt <= k;

    }
};