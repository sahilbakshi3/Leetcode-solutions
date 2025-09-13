class Solution {
public:
    
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    
    int maxFreqSum(string s) {
        int n = s.length();

        unordered_map<char, int> mp;

        int vowel_count = 0, cons_count = 0;
        for(auto it: s){
            mp[it]++;
        }

        for(auto it: mp){
            if(isVowel(it.first)){
                vowel_count = max(vowel_count, it.second);
            }
            else{
                cons_count = max(cons_count, it.second);
            }
        }
        return vowel_count + cons_count;
    }
};