// User function Template for C++
// Complete the function
forward_list<int> eraseMe(forward_list<int> fwdlist) {
    // Your code here
    if (!fwdlist.empty()) {
        auto it = fwdlist.begin();
        fwdlist.erase_after(it);
    }
        return fwdlist;
    // Use erase_after function
}
