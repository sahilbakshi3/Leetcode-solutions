class LockingTree {
public:
    
    int n;
    vector<int> parent;
    vector<vector<int>> adj;
    vector<int> status;
    
    LockingTree(vector<int>& parent) {
        this->parent = parent;
        n = parent.size();
        adj.resize(n);
        for(int i = 1; i< n; i++){
            adj[parent[i]].push_back(i);

        }
        status.assign(n, -1);
    }
    
    bool lock(int num, int user) {
        bool unlocked = status[num] == -1;
        status[num] = unlocked ? user : status[num];
        return unlocked;
    }
    
    bool unlock(int num, int user) {
        bool res = status[num] == user;
        status[num] = res ? -1: status[num];
        return res;
    }
    
    bool upgrade(int num, int user) {
        
        if(status[num] != -1) return false;

        int node = num;
        while(node != -1){
            if(status[node] != -1){
                return false;
            }
            node = parent[node];
        }

        vector<int> vis;
        if(!dfs(num, vis)){
            return false;
        }
        status[num] = user;
        for(auto &lockedChildren: vis){
            status[lockedChildren] = -1;

        }
        return true;
    }
    
    bool dfs(int node, vector<int> &vis){
        bool locked = status[node] != -1;
        if(locked){
            vis.push_back(node);
        }
        for(auto &neighbor : adj[node]){
            bool child = dfs(neighbor, vis);
            locked = locked || child;
        }
        return locked;
    }

};

/**
 * Your LockingTree object will be instantiated and called as such:
 * LockingTree* obj = new LockingTree(parent);
 * bool param_1 = obj->lock(num,user);
 * bool param_2 = obj->unlock(num,user);
 * bool param_3 = obj->upgrade(num,user);
 */