#include <bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin >> n >>m;
int arr[n][m];
int left=0;
int top=0;
int right=m-1;
int bottom=n-1;
    cout<<bottom<<"|"<<right<<endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++){

        cin >> arr[i][j];
    
    }
}
int dir = 0;
while(left<=right && top<=bottom){
    if(dir == 0){
    for (int i = left; i <=right; i++){
        cout<<arr[top][i]<<" ";
    }
    top++;
    }
    if(dir == 1){
    for (int i = top; i <=bottom; i++){
        cout<<arr[i][right]<<" ";
    }
    right--;
    }
    if(dir == 2){
    for (int i = right; i >=left; i--){
        cout<<arr[bottom][i]<<" ";
    }
    bottom--;
    }
    if(dir == 3){
    for (int i = bottom; i >=top; i--){
        cout<<arr[i][left]<<" ";
    }
    left++;
    }
    dir = (dir+1)%4; 

}
    return 0;
}