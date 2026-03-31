class Solution {
public:
    
    bool solve(long long mid, int totalTrips, vector<int> &time){
        long long actualTrips = 0;

        for(auto &it: time){
            actualTrips += mid/it;
        }

        return (actualTrips >= totalTrips);

    }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();

        long long low = 1;
        long long high = (long long)(*min_element(time.begin(), time.end())) * totalTrips;

        while(low < high){
            long long mid = low + (high - low)/2;

            if(solve(mid, totalTrips, time)){
                high = mid;
            }
            else{
                low = mid + 1;
            }

        }

        return low;


    }
};