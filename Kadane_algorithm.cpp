class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        long long maxi=INT_MIN;
        long long prefix=0;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            maxi=max(maxi,prefix);
            if(prefix<0){
                prefix=0;
            }
            
        }
        return maxi;
    }
};