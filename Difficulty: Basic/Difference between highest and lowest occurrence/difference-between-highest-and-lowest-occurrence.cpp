class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        if (freq.size() <= 1)
            return 0;

        int minFreq = INT_MAX;
        int maxFreq = INT_MIN;

        for (auto& p : freq) {
            minFreq = min(minFreq, p.second);
            maxFreq = max(maxFreq, p.second);
        }

        return maxFreq - minFreq;
    }
};