class Solution {
	public:
	bool hasTripletSum(vector<int> &arr, int target) {
		sort(arr.begin(), arr.end());
		// Code Here
		for (int i = 0; i<arr.size() - 2; i++) {
			int ans = target - arr[i];
			int start = i + 1;
			int end = arr.size() - 1;
			while (start<end) {
				if (arr[start]+arr[end] == ans) {
					return 1;
				}
				else if (arr[start]+arr[end]<ans) {
					start++;
					
				}
				else
					end--;
			}
			
		}
		return 0;
	}
};
 