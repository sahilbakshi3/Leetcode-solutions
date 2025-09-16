class Solution {
public:
    
    int gcd(long long a, long long b){

        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        
        int n = nums.size();

        for(int i = 0; i< n; i++){
            int temp = nums[i];

            while(!st.empty() && gcd(st.top(), temp) != 1){
                temp = (1LL*st.top()*temp)/gcd(st.top(), temp);
                st.pop();
            }
            st.push(temp);
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};