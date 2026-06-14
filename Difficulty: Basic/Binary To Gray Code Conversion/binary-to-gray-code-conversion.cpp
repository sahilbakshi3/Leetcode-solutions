class Solution {
  public:
    int greyConverter(int n) {
        // code here
        return n ^ (n >> 1);
    }
};