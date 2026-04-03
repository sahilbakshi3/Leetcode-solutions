class Solution {
public:
    string largestGoodInteger(string num) {
        char res = '*';
        int n = num.length();

        for(int i = 0; i< n-2; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                res = max(res, num[i]);
            }
        }

        if(res == '*') return "";

        return string(3, res);

    }
};