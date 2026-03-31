class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();

        priority_queue<int, vector<int>, greater<int>> leftHeap, rightHeap;

        int i = 0, j = n-1;

        for(int count = 0; count < candidates; count++){
            leftHeap.push(costs[i]);
            i++;
        }

        for(int count = 0; count < candidates && i <= j; count++){
            rightHeap.push(costs[j]);
            j--;
        }

        long long total = 0;

        for(int session = 0; session < k; session++){
            int leftHalfMin = leftHeap.empty() ? INT_MAX : leftHeap.top();
            int rightHalfMin = rightHeap.empty() ? INT_MAX : rightHeap.top();

            if(leftHalfMin <= rightHalfMin){
                total += leftHalfMin;
                leftHeap.pop();

                if(i <= j){
                    leftHeap.push(costs[i]);
                    i++;
                }

            }
            else{
                total += rightHalfMin;
                rightHeap.pop();

                if(i <= j){
                    rightHeap.push(costs[j]);
                    j--;
                }
            }

        }

        return total;

    }
};