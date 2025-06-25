class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;            // Pointer for the end of the valid part in nums1
        int j = n - 1;            // Pointer for the end of nums2
        int k = m + n - 1;        // Pointer for the end of nums1 (including extra space)

        // Start filling nums1 from the back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];  // Place the larger one at the back
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If any elements left in nums2, copy them
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};