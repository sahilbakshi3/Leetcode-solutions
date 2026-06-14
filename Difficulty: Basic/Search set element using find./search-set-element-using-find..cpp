class Solution {
  public:
    bool sExists(set<int> &s, int x) {
        // code here
        if(s.find(x) != s.end()){
            return true;
        }
        
        return false;
    }
};
