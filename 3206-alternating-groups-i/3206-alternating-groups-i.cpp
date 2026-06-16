class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();

        int ans = 0;

        for(int i = 0; i < n; i++){
            int left = (i + n - 1) % n;
            int right = (i + 1) % n;

            if(colors[i] != colors[left] && colors[i] != colors[right]){
                ans++;
            }
        }

        return ans;
    }
};