class Solution {
public:

    bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {

        if (sentence1.size() != sentence2.size()) {
            return false;
        }

        unordered_set<string> similar;

        for (auto& pair : similarPairs) {

            similar.insert(pair[0] + "#" + pair[1]);

            similar.insert(pair[1] + "#" + pair[0]);
        }

        for (int i = 0; i < sentence1.size(); i++) {

            if (sentence1[i] == sentence2[i]) {
                continue;
            }

            string key = sentence1[i] + "#" + sentence2[i];

            if (!similar.count(key)) {
                return false;
            }
        }

        return true;
    }
};
