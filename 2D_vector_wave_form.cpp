#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int rows=3;
    int col=3;
    vector<vector<int>>matrix(rows,vector<int>(col,1));
    for(int i =0;i<rows;i++){
        for(int j=0;j<col;j++){
        cin>>matrix[i][j];
    }
}
for(int j=0;j<col;j++){
    if(j%2==0){
        for(int i =0;i<rows;i++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
      else{
        for(int i =rows-1;i>=0;i--){
            cout<<matrix[i][j];
        }

        cout<<endl;
    }
}
return 0;

}