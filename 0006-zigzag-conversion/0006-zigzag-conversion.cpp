class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();

        if(numRows == 1 || n <= numRows){
            return s;
        }

        string res = "";
        int len = 2 * numRows - 2;

        for(int i = 0; i < numRows; i++){
            for(int j = 0; j + i < n; j += len){
                res += s[j + i];

                if(i != 0 && i != numRows - 1 && j + len - i < n){
                    res += s[j + len - i];
                }
            }
        }

        return res;

    }
};