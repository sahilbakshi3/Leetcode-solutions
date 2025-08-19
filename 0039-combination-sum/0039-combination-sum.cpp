class Solution {
public:
    
    void solve(int i, int target, vector<vector<int>> &res, vector<int> &temp, vector<int>& candidates){
        if(i == candidates.size()){
            if(target == 0) res.push_back(temp);
            return ;
        }

        if(candidates[i] <= target){
            temp.push_back(candidates[i]);
            solve(i, target-candidates[i], res, temp, candidates);
            temp.pop_back();
        }

        solve(i+1, target, res, temp, candidates);

    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;

        solve(0, target, res, temp, candidates);

        return res;
    }
};