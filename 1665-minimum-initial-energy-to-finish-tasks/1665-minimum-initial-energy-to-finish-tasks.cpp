class Solution {
public:
    

    bool solve(vector<vector<int>>& tasks, long long energy){
        for(auto &it : tasks){
            long long actual = it[0];
            long long minimum = it[1];

            if(energy < minimum) {
                return false;
            }

            energy -= actual;

        }

        return true;
    }
    
    
    int minimumEffort(vector<vector<int>>& tasks) {
        int n = tasks.size();

        sort(tasks.begin(), tasks.end(), [](vector<int> &a, vector<int> &b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        long long low = 1;
        long long high = 1e9;

        while(low < high){
            long long mid = low + (high - low)/2;

            if(solve(tasks, mid)){
                high = mid;

            }
            else {
                low = mid + 1;
            }

        }

        return low;

    }
};