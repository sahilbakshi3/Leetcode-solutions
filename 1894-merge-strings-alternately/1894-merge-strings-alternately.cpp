class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        string res = "";
        int i = 0, j = 0;

        // Merge alternately
        while (i < n && j < m) {
            res.push_back(word1[i++]);
            res.push_back(word2[j++]);
        }

        // Append leftovers
        while (i < n) res.push_back(word1[i++]);
        while (j < m) res.push_back(word2[j++]);

        return res;
    }
};