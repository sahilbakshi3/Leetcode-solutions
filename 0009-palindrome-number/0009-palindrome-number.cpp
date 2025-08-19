class Solution {
public:
    bool isPalindrome(int x) {
        // if(x < 0){
        //     return false;
        // }

        // long long rev = 0, temp = x;

        // while(temp != 0){
        //     int digit = temp%10;
        //     rev = rev*10 + digit;
        //     temp = temp/10;
        // }

        // if(rev == x){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        string ans = to_string(x);
        int s = 0, l = ans.length()-1;

        while(s < l){
            if(ans[s] != ans[l]){
                return false;
            }
            s++;
            l--;
        }
        return true;
    }
};