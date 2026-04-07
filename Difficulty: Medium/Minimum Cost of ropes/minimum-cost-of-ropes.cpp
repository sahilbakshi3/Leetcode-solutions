class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int>& arr) {
        // code here
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        if(arr.size() == 1) return 0;
        
        int ans = 0;
        for(int i = 0; i< arr.size(); i++){
            pq.push(arr[i]);
        }
        
        while(!pq.empty() && pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            
            int sum = a+b;
            ans += sum;
            pq.push(sum);
        }
        return ans;
        
    }
};
