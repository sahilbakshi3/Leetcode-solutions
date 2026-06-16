class Solution {
public:
    string processStr(string s) {
        string res = "";

        for(auto &it: s){
            if(it == '*'){
                if(!res.empty()){
                    res.pop_back();
                }
            }

            else if(it == '#'){
                res += res;
            }

            else if(it == '%'){
                reverse(res.begin(), res.end());
            }

            else {
                res.push_back(it);
            }
        }

        return res;
    }
};