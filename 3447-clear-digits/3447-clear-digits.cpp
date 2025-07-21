class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(auto it: s){
            if(isdigit(it)){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(it);
            }
        }

        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};