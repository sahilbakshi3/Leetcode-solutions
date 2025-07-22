class Solution {
public:
    string makeGood(string s) {
        string res = "";

        for(auto it: s){
            if(!res.empty() && (res.back() + 32 == it || res.back() - 32 == it)){
                res.pop_back();
            }
            else{
                res.push_back(it);
            }
        }
        return res;
    }
};