class Solution {
public:
    int badSensor(vector<int>& sensor1, vector<int>& sensor2) {

        int n = sensor1.size();

        // Brute Force - O(n²), O(1)
        //
        // For every mismatch position,
        // simulate sensor1 being faulty and
        // simulate sensor2 being faulty.
        //
        // Check which scenario matches.
        // Return:
        // 1 -> sensor1 faulty
        // 2 -> sensor2 faulty
        // -1 -> ambiguous


        // Better Solution - O(n), O(1)
        //
        // Find first mismatch.
        // From that position onward,
        // verify whether shifting sensor1
        // matches sensor2.
        //
        // Do the same for sensor2.
        //
        // Return based on which validation succeeds.


        // Optimal Solution - O(n), O(1)

        int i = 0;

        while(i < n && sensor1[i] == sensor2[i]) {
            i++;
        }

        if(i == n) {
            return -1;
        }

        int j = i + 1;

        while(j < n && sensor1[j] == sensor2[j - 1]) {
            j++;
        }

        if(j == n) {
            return 1;
        }

        j = i + 1;

        while(j < n && sensor2[j] == sensor1[j - 1]) {
            j++;
        }

        if(j == n) {
            return 2;
        }

        return -1;
    }
};
