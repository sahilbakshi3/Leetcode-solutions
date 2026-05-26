class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();

        unordered_map<char, int> mp;

        for(auto &it: s) {
            mp[it]++;
        }

        int ans = 0;
        bool flag = false;

        for(auto &it: mp) {
            int cnt = it.second;

            if(cnt % 2 == 0) {
                ans += cnt;
            }
            else {
                ans += cnt - 1;
                flag = true;
            }
        }

        if(flag) ans++;

        return ans;

    }
};