class Solution {
	public:
	bool findPair(vector<int> &arr, int x) {
		bool ans = 0;
		// code here
		sort(arr.begin(), arr.end());
		int start = 0;
		int end = 1;
		
		while (end<arr.size()) {
			if (arr[end]-arr[start] == x) {
				return 1;
				
			}
			else if (arr[end]-arr[start]<x) {
				end++;
			}
			else {
				start++;
			}
			if (start == end) {
				end++;
			}
		}
		return ans;
	}
};
