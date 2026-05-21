class Solution {
public:

    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {

        int idx1 = -1;
        int idx2 = -1;

        int ans = INT_MAX;

        for (int i = 0; i < wordsDict.size(); i++) {

            if (wordsDict[i] == word1) {
                idx1 = i;
            }

            if (wordsDict[i] == word2) {
                idx2 = i;
            }

            if (idx1 != -1 && idx2 != -1) {

                ans = min(ans, abs(idx1 - idx2));
            }
        }

        return ans;
    }
};
