class Solution {
public:
    string removeStars(string s) {
        // stack<char> st;

        // for(auto it: s){
        //     if(!st.empty() && (it == '*')){
        //         st.pop();
        //     }
        //     else{
        //         st.push(it);
        //     }
        // }
        // string res = "";
        // while(!st.empty()){
        //     res += st.top();
        //     st.pop();
        // }
        // reverse(res.begin(), res.end());
        // return res;

        int n = s.length();
        vector<char> temp(n);

        int j = 0;
        for(int i = 0; i< n; i++){
            if(s[i] == '*'){
                j--;
            }
            else{
                temp[j] = s[i];
                j++;
            }
        }
        string res = "";
        for(int i = 0; i<= j-1; i++){
            res.push_back(temp[i]);
        }
        return res;
    }
};