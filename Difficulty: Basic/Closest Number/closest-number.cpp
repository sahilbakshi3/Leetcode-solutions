class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int q = n / m;

        int n1 = m * q;
        int n2;

        if ((n * m) > 0)
            n2 = m * (q + 1);
        else
            n2 = m * (q - 1);

        int d1 = abs(n - n1);
        int d2 = abs(n - n2);

        if (d1 < d2)
            return n1;
        else if (d2 < d1)
            return n2;
        else
            return (abs(n1) > abs(n2)) ? n1 : n2;
    }
};