class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        long long D = 1LL * b * b - 4LL * a * c;

        if (D < 0)
            return {-1};

        double r1 = (-b + sqrt(D)) / (2.0 * a);
        double r2 = (-b - sqrt(D)) / (2.0 * a);

        int x = floor(r1);
        int y = floor(r2);

        if (x < y)
            swap(x, y);

        return {x, y};
    }
};