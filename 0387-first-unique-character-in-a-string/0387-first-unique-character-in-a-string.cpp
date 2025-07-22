class Solution {
public:
    int firstUniqChar(string s) {
        
        // unordered_map<char, int> mp;

        // for(auto it: s){
        //     mp[it]++;
        // }

        // for(int i = 0; i< s.length(); i++){
        //     if(mp[s[i]] == 1) return i;
        // }
        // return -1;

        int freq[26] = {0};

        for(auto it: s){
            freq[it - 'a']++;
        }

        for(int i = 0; i< s.length(); i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};