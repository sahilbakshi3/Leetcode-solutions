class Solution {
public:
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
    }
};