class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26, 0), upper(26, 0);

        for(auto it: word){
            if(islower(it)){
                lower[it - 'a']++;
            }
            else{
                upper[it - 'A']++;
            }
        }

        int cnt = 0;

        for(int i = 0; i< 26; i++){
            if(lower[i] != 0 && upper[i] != 0){
                cnt++;
            }
        }
        return cnt;
    }
};