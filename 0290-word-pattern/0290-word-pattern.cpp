class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = pattern.length();

        vector<string> words;
        stringstream ss(s);
        string token;
        int countWords = 0;

        while (getline(ss, token, ' ')) {
            words.push_back(token);
            countWords++;
        }

        if (n != countWords) return false;

        unordered_map<string, char> mp; // word -> char
        unordered_set<char> st;         // used chars

        for (int i = 0; i < n; ++i) {
            string &word = words[i];
            char ch = pattern[i];

            auto it = mp.find(word);
            if (it == mp.end()) {
                // word not seen before
                if (st.find(ch) != st.end()) {
                    // this char already maps to some other word -> conflict
                    return false;
                }
                mp[word] = ch;
                st.insert(ch);
            } else {
                // word seen before: must map to same char
                if (it->second != ch) return false;
            }
        }
        return true;
    }
};