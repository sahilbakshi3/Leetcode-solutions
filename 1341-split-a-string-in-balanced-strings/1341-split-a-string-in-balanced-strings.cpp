class Solution {
public:
    
    bool isBalanced(string &s){
        int l = 0, r = 0;

        for(auto &it: s){
            if(it == 'R'){
                r++;
            }
            else{
                l++;
            }
        }
        return (l == r);
    }
    
    int solve(int idx, string &s, vector<int> &dp){
        if(idx == s.length()){
            return 0;
        }
        if(dp[idx] != -1){
            dp[idx];
        }

        int maxCount = 0;

        for(int i = idx+1; i<=s.length(); i++){
            string sub = s.substr(i, idx - i);
            if(isBalanced(sub)){
                maxCount = max(maxCount, 1 + solve(i, s, dp));
            }
        }
        return dp[idx] = maxCount;
    }
    
    int balancedStringSplit(string s) {
        int n = s.length();

        // stack<char> st;
        // int ans = 0;

        // for(auto &it: s){
        //     if(!st.empty() && st.top() != it){
        //         st.pop();
        //         if(st.empty()){
        //             ans++;
        //         }
        //     }
        //     else{
        //         st.push(it);
        //     }
        // }
        // return ans;

        int l = 0, r = 0, res = 0;

        for(auto &it: s){
            if(it == 'R'){
                r++;
            }
            else{
                l++;
            }

            if(l == r){
                res++;
            }
        }
        
        return res;
        // vector<int> dp(n, 0);
        // return solve(0, s, dp);

    }
};