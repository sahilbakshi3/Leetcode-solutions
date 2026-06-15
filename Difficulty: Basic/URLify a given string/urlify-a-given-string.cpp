class Solution {
  public:
    string URLify(string &s) {
        // code here
        string ans;
        
        for(auto &it: s){
            if(it == ' '){
                ans += "%20";
            }
            else{
                ans += it;
            }
        }
        
        return ans;
    }
};