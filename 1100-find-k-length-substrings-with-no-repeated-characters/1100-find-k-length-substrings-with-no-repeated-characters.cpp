class Solution {
public:

    int numKLenSubstrNoRepeats(string s, int k) {

        if (k > s.size()) {
            return 0;
        }

        vector<int> freq(26, 0);
        int left = 0;
        int ans = 0;

        for (int right = 0;right < s.size();right++) {
            freq[s[right] - 'a']++;

            while (freq[s[right] - 'a'] > 1) {
                freq[s[left] - 'a']--;
                left++;
              
            }

            if (right - left + 1 == k) {
                ans++;
                freq[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};
