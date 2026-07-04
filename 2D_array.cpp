#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int antidiagonalsum(int arr[][4],int rows,int col);
int antidiagonalsum(int arr[][4],int rows,int col){
    int sum=0;
    for(int i = 0;i<rows;i++){
        sum+=arr[i][col-1-i];
    }
   return sum;
}

int diagonalsum(int arr[][4],int rows,int col);
int diagonalsum(int arr[][4],int rows,int col){
    int sum=0;
    for(int i = 0;i<rows;i++){
        sum+=arr[i][i];
    }
   return sum;
}


int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout<<antidiagonalsum(arr,4,4);
    cout<<diagonalsum(arr,4,4);
    return 0;
}