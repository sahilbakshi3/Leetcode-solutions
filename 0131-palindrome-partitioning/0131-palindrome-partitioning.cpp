class Solution {
public:
    
    vector<vector<string>> ans;

    bool check(string &s){
        int n = s.length();

        if(n == 1){
            return true;
        }

        int left = 0, right = n - 1;

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
    
    
    void solve(int i , string &s, vector<string> &temp, int n){
        if(i == n){
            ans.push_back(temp);
        }

        for(int j = i; j < n; j++){
            string x = s.substr(i, j - i + 1);

            if(check(x)){
                temp.push_back(x);
                solve(j + 1, s, temp, n);
                temp.pop_back();
            }
        }

    }
    
    vector<vector<string>> partition(string s) {
        int n = s.length();

        vector<string> temp;

        solve(0, s, temp, n);

        return ans;
    }
};