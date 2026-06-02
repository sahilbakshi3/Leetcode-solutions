class Solution {
public:
    int calculate(string s) {
        int n = s.length();

        stack<long long> st;

        long long temp = 0;
        char sign = '+';

        for(int i = 0; i< n; i++){
            char ch = s[i];

            if(isdigit(ch)){
                temp = temp * 10 + (ch - '0');
            }

            if ((!isdigit(ch) && ch != ' ') || i == n - 1){
                if(sign == '+'){
                    st.push(temp);
                }
                else if(sign == '-'){
                    st.push(-temp);
                }
                else if(sign == '*'){
                    long long top = st.top();
                    st.pop();
                    st.push(top * temp);
                }
                else {
                    long long top = st.top();
                    st.pop();
                    st.push(top / temp);
                }

                sign = ch;
                temp = 0;
            }
        }

        long long ans = 0;

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return (int)ans;

    }
};