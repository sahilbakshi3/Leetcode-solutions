class Solution {
public:
    
    // typedef long long ll;

    // bool check(ll mid, vector<int>& workerTimes, int &mountainHeight){
    //     ll h = 0;

    //     for(auto t: workerTimes){
    //         h += (ll)(sqrt(2.0*mid/t + 0.25) - 0.5);

    //         if(h >= mountainHeight){
    //             return true;
    //         }
    //     }
    //     return h >= mountainHeight;
    // }
    
    long long minNumberOfSeconds(int h, vector<int>& t) {

        // int maxTime = *max_element(workerTimes.begin(), workerTimes.end());

        // ll l = 1;
        // ll r = 1ll * maxTime * mountainHeight * (mountainHeight+1)/2;

        // ll result = 0;

        // while(l <= r){

        //     ll mid = l + (r - l)/2;

        //     if(check(mid, workerTimes, mountainHeight)){
        //         result = mid;
        //         r = mid - 1;

        //     }
        //     else{
        //         l = mid + 1;
        //     }
        // }
        // return result;

        priority_queue<pair<long long, pair<int,int>>, 
        vector<pair<long long, pair<int,int>>>, 
        greater<pair<long long, pair<int,int>>>> pq;

        for(int i = 0; i < t.size(); i++){
            long long tm = t[i];
            pq.push({tm, {i, 1}});
        }

        long long res = 0;

        while(h > 0){
            auto cur = pq.top();
            pq.pop();

            long long tm = cur.first;
            int id = cur.second.first;
            int x = cur.second.second;

            res = tm;
            h--;

            if(h > 0){
                long long nx = x + 1;
                long long nt = (long long)t[id] * (nx * (nx + 1) / 2);
                pq.push({nt, {id, (int)nx}});
            }
        }

        return res;
    }
};