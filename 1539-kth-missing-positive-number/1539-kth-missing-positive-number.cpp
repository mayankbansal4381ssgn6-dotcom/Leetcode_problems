class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0;
        int end=arr.size()-1;
        int mid;
        int index=arr.size(); // if array is perfectly sorted and nothing is

        while(start<=end){
            mid=start+(end-start)/2; // find the correct index for the kth missing element

            if(arr[mid]-mid-1<k)   // arr[mid]-mid-1 we used this to find the total numbers of positiive numbers missing . 
            start=mid+1;
            else{
            index=mid;
            end=mid-1;
            }

        }
        
        return index+k;
        
        
        
    }
};