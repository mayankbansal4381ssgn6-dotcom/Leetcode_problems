#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool search_(vector<vector<int>> matrix,int target);
bool search_(vector<vector<int>> matrix,int target){
    int n=matrix.size();
    int m=matrix[0].size();

    int i = 0;
    int j=m-1;
    while(i<n&&j>=0){
        if(matrix[i][j]==target){
            return 1;
        }
        else if(matrix[i][j]<target){
            i++;
        }
        else
        j--;
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix(4,vector<int>(4,1));
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"enter the target = "<<endl;
    cin>>target;
    cout<<search_(matrix,target);
    return 0;
}