class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();

        double ans = 0;

        for(int i = 0; i< n; i++){
            for(int j = i+1; j< n; j++){
                for(int k = j+1; k< n; k++){
                    vector<int> a = points[i];
                    vector<int> b = points[j];
                    vector<int> c = points[k];
                    double area = abs((double)(a[0]*(b[1]-c[1]) + b[0]*(c[1]-a[1]) + c[0]*(a[1]-b[1]))/2);
                    ans = max(ans, area);
                }
            }
        }
        return ans;
    }
};