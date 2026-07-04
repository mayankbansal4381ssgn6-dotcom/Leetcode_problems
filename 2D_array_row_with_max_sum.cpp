#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
pair<int,int> max_sum(int arr[][4],int rows,int col);
pair<int,int> max_sum(int arr[][4],int rows,int col){
    int row_sum=0;
    int sum= INT_MIN;
    int index;

    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            row_sum+=arr[i][j];
           if (row_sum>sum){
            sum=row_sum;
            index=i;
           }
        }
        row_sum=0;
        
    }
    return {index,sum};

}
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    pair<int, int> result = max_sum(arr, 4, 4);
    cout<<result.first<<endl;
    cout<<result.second<<endl;
    return 0;
    
}