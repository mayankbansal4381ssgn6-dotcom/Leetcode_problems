class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size() - 2;
        int mid;
        while (start <= end) {
           mid = start + (end - start) / 2; 
            if (arr.at(mid) > arr.at(mid - 1) && arr.at(mid) > arr.at(mid + 1)) {
                return mid;
            } else if (arr.at(mid) > arr.at(mid - 1)) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return mid;
    }
};