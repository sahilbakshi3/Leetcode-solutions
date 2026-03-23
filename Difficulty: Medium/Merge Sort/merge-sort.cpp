class Solution {
  public:
    
    void merge(vector<int> &arr, int low, int high, int mid){
        vector<int> temp;
        
        int i = low;
        int j = mid + 1;
        
        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
        }
        
        while(i <= mid){
            temp.push_back(arr[i++]);
        }
        
        while(j <= high){
            temp.push_back(arr[j++]);
        }
        
        for(int k = 0; k< temp.size(); k++){
            arr[low + k] = temp[k];
        }
        
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        
        if(l >= r) return ;
        
        int mid = l + (r - l)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        
        merge(arr, l, r, mid);
        
        
    }
};