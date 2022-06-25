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
    for (int j = i; j < n; j++){
        for (int k = i; k <=j; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}