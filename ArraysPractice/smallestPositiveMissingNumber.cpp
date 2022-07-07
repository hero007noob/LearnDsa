#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
static int idxArr[N];
int main(){

int n;
cin >> n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++){
    if(arr[i] >= 0){
        idxArr[arr[i]] = 1;
    }
}

for (int i = 1; i<N;i++){
    if(idxArr[i] == 0){
        cout<<i<<endl;
        return 0;
    }
}
    return 0;
}