class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rows=matrix.size();
        int col=matrix[0].size();
        int top=0,bottom=rows-1,left=0,right=col-1;

        while(top<=bottom&&left<=right){
            //printing the top row
            for(int i =left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //printing the right col
            for(int j=top;j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            //printing the bottom row;
            if(top<=bottom){
                for(int i = right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
            bottom--;
                
            }
            //printing the left col;
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    ans.push_back(matrix[j][left]);
                }
                left++;
            }


        }
        return ans;
    }
};