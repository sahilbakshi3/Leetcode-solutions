class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();

        long long ans = 0;
        long long temp = 0;

        for(int i = 0; i< n; i++){
            if(s[i] == '1'){
                temp++;
            }
            else{
                ans += temp;
            }
        }

        return ans;
    }
};