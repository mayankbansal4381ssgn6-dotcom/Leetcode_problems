class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0;
        int end;
        int mid;
        int ans;

        for(int i=0;i<weights.size();i++){
            start=max(start,weights[i]);
            end+=weights[i];
        }

        while(start<=end){
            mid=start+(end-start)/2;
            int days_count=1;
            int weights_per_day=0;
            for(int i=0;i<weights.size();i++){
                weights_per_day+=weights[i];
                if(weights_per_day>mid){
                    days_count++;
                    weights_per_day=weights[i];
                }
            }
            if(days_count<=days){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
        
    }
};