// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.length();
        int i = 0, j = n-1;
        
        while(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
        return s;
    }
};
