class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        
        int res = 0;
        
        for(auto &it: b){
            res = (res * 2) + (it - '0');
        }
        
        return res;
        
    }
};