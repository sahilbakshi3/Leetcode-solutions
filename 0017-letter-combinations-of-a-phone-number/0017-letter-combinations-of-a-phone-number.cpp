class Solution {
public:
    
    void solve(int i, vector<string> &ans, string &digits, unordered_map<char, string> &mp, string &temp){
        if(i == digits.size()){
            ans.push_back(temp);
            return ;            
        }

        char ch = digits[i];
        string str = mp[ch];

        for(int j = 0; j< str.size(); j++){
            temp.push_back(str[j]);
            solve(i+1, ans, digits, mp, temp);
            temp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};

        unordered_map<char, string> mp;
        vector<string> ans;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        string temp = "";

        solve(0, ans, digits, mp, temp);

        return ans;

    }
};