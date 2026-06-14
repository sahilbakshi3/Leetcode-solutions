class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        
        auto it = lower_bound(arr.begin(), arr.end(), k);
        
        if(it != arr.end() && *it == k){
            return true;
        }
        
        return false;
        
    }
};
