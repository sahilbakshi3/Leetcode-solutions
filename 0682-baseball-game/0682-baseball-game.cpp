class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        stack<int> st;
        
        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                
                st.push(y);
                st.push(x);
                st.push(x+y);
            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(2 * st.top());
            }
            else{
                int x = stoi(operations[i]);
                st.push(x);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};