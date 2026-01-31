class Solution {
public:
    
    vector<int> color;

    bool dfs(int node, vector<vector<int>>& graph){
        for(auto &it: graph[node]){
            if(color[it] == -1){
                color[it] = !color[node];

                if(!dfs(it, graph)){
                    return false;
                }
                
            }

            else if(color[it] == color[node]){
                return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        // int n = graph.size();

        // queue<int> q;

        // vector<int> color(n, -1);

        // for(int i = 0; i< n; i++){
        //     if(color[i] != -1){
        //         continue;
        //     }

        //     color[i] = 0;
        //     q.push(i);

        //     while(!q.empty()){
        //         int node = q.front();
        //         q.pop();

        //         for(auto &it: graph[node]){
        //             if(color[it] == -1){
        //                 color[it] = !color[node];
        //                 q.push(it);
        //             }
        //             else if(color[it] == color[node]){
        //                 return false;
        //             }
        //         }
        //     }

        // }

        // return true;

        int n = graph.size();

        color.assign(n, -1);

        for(int i = 0; i< n; i++){
            if(color[i] == -1){
                color[i] = 0;
                if(!dfs(i, graph)){
                    return false;
                }
            }
        }
        return true;
    }
};