class Solution {
  public:
    bool vExists(vector<int> v, int x) {
        // Code here
        if(find(v.begin(), v.end(), x) != v.end()){
            return true;
        }
        
        return false;
    }
};
