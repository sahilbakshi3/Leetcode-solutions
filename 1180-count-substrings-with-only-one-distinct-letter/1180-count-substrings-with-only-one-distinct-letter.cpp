class Solution {
public:

    int countLetters(string s) {

        int n = s.size();
        int ans = 0;
        int i = 0;

        while (i < n) {

            int j = i;
            while (j < n && s[j] == s[i]) {
                j++;
            }

            int len = j - i;
            ans += (len * (len + 1)) / 2;
            i = j;
        }

        return ans;
    }
};
