class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool mp[26];

        for(auto &it: brokenLetters){
            mp[it - 'a'] = true;
        }

        bool canType = true;
        int res = 0;

        for(auto &it: text){
            if(it == ' '){
                if(canType){
                    res++;
                }
                canType = true;
            }
            else if(mp[it - 'a'] == true){
                canType = false;
            }
        }

        if(canType){
            res++;
        }

        return res;

    }
};