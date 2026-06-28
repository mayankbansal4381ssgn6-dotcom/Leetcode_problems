class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
        int start=0;
        int end=nums.size()-1;
        int mid;
        bool ans= false;

        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==k){
                return true;
            }
            if(nums[mid]==nums[start]&&nums[mid]==nums[end]){
                start++;
                end--;
            }
            //check if the array is left
            else if(nums[mid]>=nums[start]){
                if(nums[start]<=k&&nums[mid]>=k){
                    end=mid-1;

                }
                else{
                start=mid+1;
                }
            }
            else{
                if(nums[mid]<=k&&nums[end]>=k){
                    start=mid+1;

                }
                else{
                end=mid-1;
                }
            }
        }
        return ans;
         
      
    }
};