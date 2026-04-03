class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCnt(26, 0);

        for(auto &it: chars){
            charCnt[it- 'a']++;
        }

        int result = 0;

        for(auto &word: words){
            vector<int> wordCnt(26, 0);
            for(auto &it: word){
                wordCnt[it - 'a']++;
            }

            bool ok = true;

            for(int i = 0; i< 26; i++){
                if(wordCnt[i] > charCnt[i]){
                    ok = false;
                    break;
                }
            }

            if(ok){
                result += word.size();
            }

        }

        return result;

    }
};