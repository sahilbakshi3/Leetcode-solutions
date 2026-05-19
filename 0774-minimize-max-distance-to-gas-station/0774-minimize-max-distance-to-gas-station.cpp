class Solution {
public:

    bool possible(vector<int>& stations, int k, double mid) {

        int requiredStations = 0;

        for(int i = 0; i < stations.size() - 1; i++) {

            double gap = stations[i + 1] - stations[i];

            int stationsNeeded = gap / mid;

            if(gap == stationsNeeded * mid) {
                stationsNeeded--;
            }

            requiredStations += stationsNeeded;
        }

        return requiredStations <= k;
    }

    double minmaxGasDist(vector<int>& stations, int k) {

        double low = 0;
        double high = stations.back() - stations.front();

        double diff = 1e-6;

        while((high - low) > diff) {

            double mid = low + (high - low) / 2.0;

            if(possible(stations, k, mid)) {
                high = mid;
            }
            else {
                low = mid;
            }
        }

        return high;
    }
};
