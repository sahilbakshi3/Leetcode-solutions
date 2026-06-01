class Solution {
public:

    unordered_map<string, string> parent;

    string find(string x) {

        if (!parent.count(x)) {

            parent[x] = x;
        }

        if (parent[x] == x) {

            return x;
        }

        return parent[x] = find(parent[x]);
    }

    void unite(string a, string b) {

        string pa = find(a);
        string pb = find(b);

        if (pa != pb) {

            parent[pa] = pb;
        }
    }

    bool areSentencesSimilarTwo(vector<string>& sentence1, vector<string>& sentence2, vector<vector<string>>& similarPairs) {

        if (sentence1.size() != sentence2.size()) {

            return false;
        }

        for (auto& pair : similarPairs) {

            unite(pair[0], pair[1]);
        }

        for (int i = 0; i < sentence1.size(); i++) {

            if (sentence1[i] == sentence2[i]) {
                continue;
            }

            if (find(sentence1[i]) != find(sentence2[i])) {

                return false;
            }
        }

        return true;
    }
};
