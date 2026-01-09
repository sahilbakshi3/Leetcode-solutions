class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();

        double totalWaitTime = 0;
        double currTime = 0;

        for(auto &it: customers){
            int arrivalTime = it[0];
            int cookTime = it[1];

            if(currTime < arrivalTime){
                currTime = arrivalTime;
            }

            int waitTime = currTime + cookTime - arrivalTime;

            totalWaitTime += waitTime;

            currTime += cookTime;

        }

        return totalWaitTime/n;

    }
};