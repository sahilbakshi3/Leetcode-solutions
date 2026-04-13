class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0;

        // for(int i = 0; i< n; i++){
        //     unordered_map<char, int> mp;
        //     for(int j = i; j< n; j++){
        //         mp[s[j]]++;

        //         if(mp[s[j]] > 1){
        //             break;
        //         }

        //         maxLen = max(maxLen, j - i + 1);

        //     }
        // }

        int left = 0;
        vector<int> last_seen(128, -1);

        for(int right = 0; right < n; right++){
            int current_char = s[right];
            if(last_seen[current_char] >= left){
                left = last_seen[current_char] + 1;
            }

            last_seen[current_char] = right;

            maxLen = max(maxLen, right - left + 1);

        }

        return maxLen;
    }
};