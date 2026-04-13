class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxLen = 0;

        // for (int i = 0; i < n; i++) {
        //     vector<int> freq(26, 0);
        //     int maxFreq = 0;

        //     for (int j = i; j < n; j++) {
        //         freq[s[j] - 'A']++;
        //         maxFreq = max(maxFreq, freq[s[j] - 'A']);

        //         int len = j - i + 1;
        //         if (len - maxFreq <= k) {
        //             maxLen = max(maxLen, len);
        //         }
        //     }
        // }

        int left = 0, maxFreq = 0;

        vector<int> freq(26, 0);

        for(int right = 0; right < n; right++){
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);

        }

        return maxLen;
    }
};