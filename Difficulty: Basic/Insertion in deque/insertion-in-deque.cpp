// User function Template for C++

class Solution {
  public:
    // Function to insert all elements of the array in deque.
    deque<int> insertInDq(vector<int>& arr) {
        // add your code here
        
        deque<int> dq;
        
        for(int i = 0; i < arr.size(); i++){
            dq.push_back(arr[i]);
        }
        
        return dq;
        
    }
};