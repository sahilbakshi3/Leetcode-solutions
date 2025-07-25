class Solution {
public:
    string makeFancyString(string s) {
        stack<char> st;

        for(auto it: s){
            st.push(it);

            if(st.size() >= 3){
                char first = st.top();
                st.pop();
                char second = st.top();
                st.pop();
                char third = st.top();
                st.pop();

                if(first == second && second == third){
                    st.push(second);
                    st.push(first);
                }
                else{
                    st.push(third);
                    st.push(second);
                    st.push(first);
                }
            }
        }
        string ans = "";

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};