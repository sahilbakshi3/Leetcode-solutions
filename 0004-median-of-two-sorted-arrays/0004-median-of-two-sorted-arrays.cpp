class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();

        if(m > n){
            return findMedianSortedArrays(nums2, nums1);
        }

        int halfLength = (m + n + 1)/2;
        int low = 0, high = m;

        while(low <= high){
            int mid1 = low + (high - low)/2;
            int mid2 = halfLength - mid1;

            int l1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int l2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int r1 = (mid1 == m) ? INT_MAX : nums1[mid1];
            int r2 = (mid2 == n) ? INT_MAX : nums2[mid2];

            if(l1 > r2){
                high = mid1 - 1;
            }
            else if(l2 > r1){
                low = mid1 + 1;
            }
            else{
                int maxLeft = max(l1, l2);
                int minRight = min(r1, r2);

                if((m + n) % 2 == 1) return maxLeft;

                else return (maxLeft + minRight)/2.0;

            }

        }

        return 0.0;
    }
};