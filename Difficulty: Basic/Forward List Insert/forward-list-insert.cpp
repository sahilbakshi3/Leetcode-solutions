// User function Template for C++

// arr: insert the elements of vector to forwardList
// Complete the function
forward_list<int> insertIntoFL(vector<int>& arr) {
    // your code here
    forward_list<int> fl;
    
    for(int i = 0; i< arr.size(); i++){
        fl.push_front(arr[i]);
    }
    
    return fl;
    // Use push_front() method to push the elements in a forward list and return the
    // list
}