class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int mid;
        int first = -1, last = -1; // Fix 1: Properly initialize both

        // --- Loop 1: Find the First Position ---
        while (start <= end) {
            mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                first = mid;      // Record candidate index
                end = mid - 1;    // Fix 3: Force search to look left for earlier instances
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        // --- Fix 2: Reset pointers completely for the second search ---
        start = 0;
        end = n - 1;

        // --- Loop 2: Find the Last Position ---
        while (start <= end) {
            mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                last = mid;       // Record candidate index
                start = mid + 1;  // Force search to look right for later instances
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
     vector<int>a(2);
      a[0]=first;
      a[1]=last;
        return a; // Cleaner way to return a 2-element vector
    }
};