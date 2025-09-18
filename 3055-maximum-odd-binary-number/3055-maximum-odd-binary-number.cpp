class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();

        // sort(s.begin(), s.end(), greater<char> ());

        // for(int i = n-1; i>=0; i--){
        //     if(s[i] == '1'){
        //         swap(s[i], s[n-1]);
        //     }
        // }
        // return s;

        int cnt1 = 0, cnt0 = 0;

        for(int i = 0; i< n; i++){
            if(s[i] == '1'){
                cnt1++;
            }
            else if(s[i] == '0'){
                cnt0++;
            }
        }

        string res = string(cnt1 - 1, '1') + string(cnt0, '0') +'1';
        return res;


    }
};