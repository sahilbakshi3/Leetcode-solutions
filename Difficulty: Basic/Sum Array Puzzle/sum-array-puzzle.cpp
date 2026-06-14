class Solution {
  public:
    void sumArray(vector<int> &arr) {
        // code here
        long long sum = 0;
        
        for(auto &it: arr){
            sum += it;
        }
        
        for(auto &it: arr){
            it = sum - it;
        }
    }
};