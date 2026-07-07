#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
struct RowSum {
    int index;
    int sum;
};
RowSum max_sum(int arr[][4],int rows,int col);
RowSum max_sum(int arr[][4],int rows,int col){
    int row_sum=0;
    int max_sum=INT_MIN;
    int row_index=-1;
    for (int i =0;i<rows;i++){
        int row_sum=0;
        for(int j=0;j<col;j++){
            row_sum+=arr[i][j];
        }
        if(row_sum>max_sum){
            max_sum=row_sum;
            row_index=i;
        }

        }
        return{row_index,max_sum};
    }
    

    int main(){
        int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        RowSum result=max_sum(arr,4,4);
        cout<<"max row index="<<result.index<<endl;
        cout<<"max row sum="<<result.sum<<endl;
        return 0;
    }
    
