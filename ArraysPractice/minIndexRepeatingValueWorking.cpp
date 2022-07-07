#include <bits/stdc++.h>
using namespace std;


const int N = 1e4;
static int minArr[N] = {-1};
int main(){

int MinIdx = INT_MAX;

int n;
cin >> n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int j = 0; j< N; j++){
    minArr[j] = -1;
}

for( int k = 0; k< n; k++){
    if(minArr[arr[k]]!=-1){
      MinIdx = min(MinIdx,minArr[arr[k]]);
    }else{
        minArr[arr[k]] = k;
    }
}
if(MinIdx == INT_MAX){
    cout<<"-1"<<endl;
}else{

cout<<MinIdx+1<<endl;
}
    return 0;
}