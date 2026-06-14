class Solution {
  public:
    
    bool isValid(int num) {
        if (num < 10) return false;

        int last = num % 10;
        num /= 10;

        while (num > 0) {
            int curr = num % 10;

            if (abs(curr - last) != 1)
                return false;

            last = curr;
            num /= 10;
        }

        return true;
    }
    
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        
        vector<int> ans;

        for (int num : arr) {
            if (num < k && isValid(num)) {
                ans.push_back(num);
            }
        }

        return ans;
        
        
    }
};