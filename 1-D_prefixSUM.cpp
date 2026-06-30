class Solution {
	public:
	vector<int> prefSum(vector<int> &arr) {
		// code here
		;
		
		vector<int>prefix_sum(arr.size());
		prefix_sum[0] = arr[0];
		for (int i = 1; i<arr.size(); i++) {
			prefix_sum[i] = prefix_sum[i - 1]+arr[i]; }
			
			return prefix_sum;
		}
	};
