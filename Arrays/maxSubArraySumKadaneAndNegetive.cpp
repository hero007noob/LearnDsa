#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
static int idxArr[N];
int main(){

int n;
cin >> n;
int arr[n];
int maxSum = INT_MIN;
int flag = false;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]>-1){
        flag = true;
    }
    maxSum = max(maxSum,arr[i]);
}
if(flag){
maxSum = arr[0];
int currentSum = 0;
for (int i = 0; i < n; i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
}
}
std::cout<<maxSum<<endl;
    return 0;
}