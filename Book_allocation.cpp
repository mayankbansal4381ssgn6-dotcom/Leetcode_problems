class Solution {
	public:
	int findPages(vector<int> &arr, int k) {
		// code here
		int books = arr.size();
		if (k>books) {
			return - 1;
		}
		int start = 0;
		int end = 0;
		int ans;
		int mid;
		
		for (int i = 0; i<arr.size(); i++) {
			start = max(start, arr[i]);
			end += arr[i];
			
		}
		
		while (start <= end) {
			mid = start + (end - start)/2;
			
			int pages = 0 ; // intially giving 0 pages;
			
			int count = 1; // staritng with person one
			
			for (int i = 0; i<arr.size(); i++) {
				pages += arr[i];
				if (pages>mid) {
					count ++;
					pages = arr[i]; // now giving rest of the books to second person
					
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
