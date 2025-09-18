class Solution {
public:
    
    bool isAlNum(char ch){
        if(ch >= '0' && ch <= '9'
            || ch >= 'a' && ch <= 'z'
            || ch >= 'A' && ch <= 'Z'
        ){
            return true;
        }
        return false;
    }

    char tolower(char ch){
        if(ch >= 'A' && ch <= 'Z'){
            return ch + 32;
        }
        return ch;
    }
    
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;

        while(i < j){
            if(!isAlNum(s[i])){
                i++;
                continue;
            }
            if(!isAlNum(s[j])){
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};