class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(auto it: s){
            if(!st.empty() && (it == '*')){
                st.pop();
            }
            else{
                st.push(it);
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};