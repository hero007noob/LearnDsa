#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
static int idxArr[N];
int main(){

int n;
cin >> n;
int arr[n];
int maxSum = INT_MIN;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++){
    int currentSum = 0;
    for (int j = i; j < n; j++){
        currentSum+=arr[j];
        maxSum = max(maxSum,currentSum);
    }
}
std::cout<<maxSum<<endl;
    return 0;
}