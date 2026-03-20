class TimeMap {
public:

    unordered_map<string, vector<pair<int, string>>> mp; 

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        pair<int, string> temp = {timestamp, value};
        mp[key].push_back(temp);
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end()) return "";

        auto &temp = mp[key];
        int n = temp.size();
        string ans = "";

        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(temp[mid].first <= timestamp){
                ans = temp[mid].second;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */