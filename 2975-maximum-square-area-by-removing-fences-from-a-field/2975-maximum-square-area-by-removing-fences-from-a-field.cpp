class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        if(m == n){
            return (m-1)*(n-1);
        }

        vector<int> h(hFences.size() +2);
        vector<int> v(vFences.size() +2);

        h[0] = 1, h[h.size() - 1] = m;
        v[0] = 1, v[v.size() - 1] = n;

        for(int i = 0; i< hFences.size(); i++){
            h[i+1] = hFences[i];
        }

        for(int i = 0; i< vFences.size(); i++){
            v[i+1] = vFences[i];
        }

        sort(h.begin(), h.end());
        sort(v.begin(), v.end());

        set<int> st;

        for(int i = 0; i< h.size(); i++){
            for(int j = i+1; j < h.size(); j++){
                st.insert(h[j]- h[i]);
            }
        }

        int maxSide = INT_MIN;

        for(int i = 0; i< v.size(); i++){
            for(int j = i+1; j<v.size(); j++){
                if(st.count(v[j] - v[i])){
                    maxSide = max(maxSide, v[j] - v[i]);
                }
            }
        }

        if(maxSide == INT_MIN) return -1;

        const long long MOD = 1e9 + 7;

        return (int)((1LL*maxSide*maxSide) % MOD);

    }
};