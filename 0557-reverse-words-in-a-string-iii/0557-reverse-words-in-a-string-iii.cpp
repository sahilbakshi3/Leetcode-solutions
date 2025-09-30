class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();

        // for(int i = 0; i< n; i++){
        //     int j = i;

        //     while(j < n && s[j] != ' '){
        //         j++;
        //     }

        //     reverse(s.begin() + i, s.begin() + j);

        //     i = j;

        // }
        // return s;

        stringstream ss(s);
        string token = "";
        string res = "";

        while(ss >> token){
            reverse(token.begin(), token.end());
            res += token + " ";
        }

        return res.substr(0, res.length()-1);

    }
};