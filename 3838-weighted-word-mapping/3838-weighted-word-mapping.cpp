class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for(auto &it: words) {
            int sum = 0;

            for(auto &c: it){
                sum += weights[c - 'a'];
            }

            int mod = sum % 26;
            ans.push_back('z' - mod);

        }

        return ans;
    }
};