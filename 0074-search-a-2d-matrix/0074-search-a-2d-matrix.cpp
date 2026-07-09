class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // since the array is sorted
        // we can use row major approch and binary search in that 1D array
        int n=matrix.size();
        int m=matrix[0].size();
        int start=0;
        int end=n*m-1;
        int mid;
        int row_index;
        int col_index;
      
        while(start<=end){
            mid=start+(end-start)/2;
            row_index=mid/m;
            col_index=mid%m;
            if(matrix[row_index][col_index]==target){
                return 1;
            }
            else if(matrix[row_index][col_index]<target){
                start++;
            }
            else
            end--;
            
        }
        return 0;
      
        
    }
};