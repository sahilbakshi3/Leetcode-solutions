class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> freq;
        freq[0] = 1;  // important base case
    
        int sum = 0;
        int count = 0;
    
        for (int num : arr) {
            sum += num;
    
            if (freq.find(sum - k) != freq.end()) {
                count += freq[sum - k];
            }
    
            freq[sum]++;
        }
    
        return count;
    }
};