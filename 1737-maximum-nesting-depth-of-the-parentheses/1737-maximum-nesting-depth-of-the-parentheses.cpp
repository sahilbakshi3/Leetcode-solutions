class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        // int ans = 0;

        // stack<int> st;

        // for(char &it: s){
        //     if(it == '('){
        //         st.push(it);
        //         ans = max(ans, (int)st.size());
        //     }
        //     else if(it == ')'){
        //         if(!st.empty()){
        //             st.pop();
        //         }
        //     }
        // }

        // for (int i = 0; i < n; i++) {

        //     int depth = 0;

        //     for (int j = 0; j <= i; j++) {

        //         if (s[j] == '(') depth++;

        //         else if (s[j] == ')') depth--;
        //     }
        //     ans = max(ans, depth);
        // }

        int curr = 0, maxi = 0;

        for(int i = 0; i< n; i++){
            if(s[i] == '('){
                curr++;
                if(curr > maxi){
                    maxi = curr;
                }
            }
            else if(s[i] == ')'){
                curr--;
            }
        }

        return maxi;
    }
};