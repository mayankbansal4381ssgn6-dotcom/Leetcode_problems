class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // An empty array or an array with 1 element is always sorted
        if (arr.size() <= 1) {
            return true;
        }   
        
        // Traverse the array and compare adjacent elements
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false; // Found an element greater than its next neighbor
            }
        }
        
        // If the loop finishes without returning false, the array is sorted
        return true;
    }
};
