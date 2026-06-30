class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();

        int left = 0, ans = 0;
        vector<int> mp(3, 0);

        for(int right = 0; right < n; right++){
            mp[s[right] - 'a']++;

            while(mp[0] > 0 && mp[1] > 0 && mp[2] > 0){
                ans += (n - right);

                mp[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};