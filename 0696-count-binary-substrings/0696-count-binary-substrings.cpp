class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();

        int res = 0;

        int prevCnt = 0, currCnt = 1;

        for(int i = 1; i< n; i++){
            if(s[i] == s[i-1]){
                currCnt++;
            }
            else {
                res += min(prevCnt, currCnt);
                prevCnt = currCnt;
                currCnt = 1;
                
            }
        }
        // cout << "res is " << res<< endl;
        return res + min(prevCnt, currCnt);
    }
};