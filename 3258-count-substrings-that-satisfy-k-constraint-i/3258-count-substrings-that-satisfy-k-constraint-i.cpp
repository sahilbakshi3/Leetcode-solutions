class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.length();

        int left = 0, cnt0 = 0, cnt1 = 0;
        int ans = 0;

        for(int right = 0; right < n; right++){
            if(s[right] == '0'){
                cnt0++;
            }
            else{
                cnt1++;
            }

            while(cnt0 > k && cnt1 > k){
                if(s[left] == '0') cnt0--;
                else cnt1--;
                left++;
            }

            ans += (right - left + 1);
        }

        return ans;
    }
};