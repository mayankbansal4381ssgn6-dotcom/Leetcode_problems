class Solution {
	public:
	int minTime(vector<int>& arr, int k) {
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
			
			int time = 0;
			int count = 1;
			
			for (int i = 0; i<arr.size(); i++) {
				time += arr[i];
				if (time>mid) {
					count++;
					time = arr[i];
					
				}
				
			}
			if (count <= k) {
				ans = mid;
				end = mid - 1;
				
			}
			else
				start = mid + 1;
			
		}
		return ans;
	}
};
