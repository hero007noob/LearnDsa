#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
static int idxArr[N];
int main(){

int n;
cin >> n;
int arr[n];
int maxSum = 0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++){
    for (int j = i; j < n; j++){
        int currentSum = 0;
        for (int k = i; k <=j; k++){
            currentSum+=arr[k];
        }
        maxSum = max(maxSum,currentSum);
    }
}
cout<<maxSum<<endl;
    return 0;
}