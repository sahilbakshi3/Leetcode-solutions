class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        vector<int> mp(26, 0);

        priority_queue<int> pq;

        for(auto &it: tasks){
            mp[it - 'A']++;
        }

        int time = 0;

        for(int i = 0; i< 26; i++){
            if(mp[i] > 0){
                pq.push(mp[i]);
            }
        }

        while(!pq.empty()){
            vector<int> temp;

            for(int i = 1; i<=n+1; i++){
                if(!pq.empty()){
                    int top = pq.top();
                    pq.pop();
                    top--;
                    temp.push_back(top);
                }
            }

            for(auto &it: temp){
                if(it > 0){
                    pq.push(it);
                }
            }

            if(pq.empty()){
                time += temp.size();
            }
            else{
                time += n + 1;
            }

        }
        return time;
    }
};