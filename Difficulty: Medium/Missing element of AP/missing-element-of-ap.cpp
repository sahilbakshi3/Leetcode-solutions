// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();

        if(n == 2)
            return arr[1] + (arr[1] - arr[0]);

        int d1 = arr[1] - arr[0];
        int d2 = arr[2] - arr[1];

        int d = (abs(d1) < abs(d2)) ? d1 : d2;

        int low = 0, high = n - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            int expected = arr[0] + mid * d;

            if(arr[mid] == expected)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return arr[0] + low * d;
    }
};