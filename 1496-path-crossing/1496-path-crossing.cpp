class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int, int>, bool> vis;
        int x = 0, y = 0;

        for(auto it : path){
            vis[{x,y}] = true;
            if(it == 'N') y++;
            else if(it == 'S') y--;
            else if(it == 'E') x++;
            else x--;

            if(vis[{x,y}]) return true;
        }

        return false;
    }
};