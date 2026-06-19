class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();

        int maxi = 0;
        int curr = 0;

        for(auto &it: gain){
            curr += it;
            maxi = max(maxi, curr);
        }

        return maxi;
    }
};