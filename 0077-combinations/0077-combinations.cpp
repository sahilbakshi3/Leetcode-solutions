class Solution {
public:
    
    vector<vector<int>> res;

    void solve(int i, int &n, int k, vector<int> &temp){
        if(k == 0){
            res.push_back(temp);
            return ;
        }

        if(i>n) return ;

        temp.push_back(i);
        solve(i+1, n, k-1, temp);
        temp.pop_back();

        solve(i+1, n, k, temp);

    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;

        solve(1, n, k, temp);
        return res;
    }
};