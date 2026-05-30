class Solution {
public:

    string addBoldTag(string s, vector<string>& words) {

        int n = s.size();

        vector<bool> bold(n, false);

        for (int i = 0; i < n; i++) {

            int end = 0;
            for (string& word : words) {

                if (s.compare(i, word.size(), word) == 0) {

                    end = max(end, i + (int)word.size());
                }
            }

            for (int j = i; j < end; j++) {
                bold[j] = true;
            }
        }

        string ans;

        for (int i = 0; i < n; i++) {

            if (bold[i] && (i == 0 || !bold[i - 1])) {
                ans += "<b>";
            }

            ans += s[i];

            if (bold[i] && (i == n - 1 || !bold[i + 1])) {
                ans += "</b>";
            }
        }

        return ans;
    }
};
