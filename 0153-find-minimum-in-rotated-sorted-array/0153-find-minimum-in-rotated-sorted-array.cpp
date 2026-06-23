class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        int ans=nums[0];
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]>=nums[0]){  // now the array is left sorted and we can find min element 
                                    // ahead
                start=mid+1;
            }
            else{
                ans=nums[mid]; // this is right sorted and we find min elemnt behind
                end=mid-1;
            }
        }
        return ans;
        
    }
};