class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {

        sort(products.begin(), products.end());

        vector<vector<string>> ans;

        string prefix = "";

        for (char ch : searchWord) {

            prefix += ch;

            vector<string> temp;

            auto it = lower_bound(products.begin(), products.end(), prefix);

            int idx = it - products.begin();

            for (int i = idx; i < min(idx + 3, (int)products.size()); i++) {

                if (products[i].substr(0, prefix.size()) == prefix) {
                    temp.push_back(products[i]);
                }
                else {
                    break;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};