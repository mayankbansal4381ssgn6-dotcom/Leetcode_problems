class Solution {
	public:
	int leastWeightCapacity(vector<int>& arr, int D) {
		// code here
		int start = 0;
		int end = 0;
		int mid;
		int ans;
		
		for (int i = 0; i<arr.size(); i++) {
			start = max(start, arr[i]);
			end += arr[i];
			
		}
		
		while (start <= end) {
			mid = start + (end - start)/2;
			int days = 1; int weight = 0;
			for (int i = 0; i<arr.size(); i++) {
				weight += arr[i];
				if (weight>mid) {
					days++;
					weight = arr[i];
				}
				
			}
			if (days <= D) {
				ans = mid;
				end = mid - 1;
			}
			else
				start = mid + 1;
			
		}
		return ans;
	}
};
