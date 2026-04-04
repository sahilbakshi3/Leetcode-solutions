class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.length();
        vector<string>result;
        while(s.length()% k !=0){
            s +=fill;
        }
        for(int i=0;i<n;i+=k){
            result.push_back(s.substr(i,k));
        }
        return result;
    }
};