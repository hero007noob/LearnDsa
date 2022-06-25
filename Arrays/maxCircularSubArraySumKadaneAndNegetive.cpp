#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int maxSum = arr[0];
    int currentSUm = 0;
    for(int i=0;i<n; i++){
        currentSUm += arr[i];
        if(currentSUm < 0){
            currentSUm = 0;
        }
        maxSum = max(maxSum,currentSUm);
    }
    return maxSum;
}


int main(){

int n;
cin >> n;
int arr[n];
int oppArr[n];
int maxSum = INT_MIN;
int flag = false;
int total = 0;
for (int i = 0; i < n; i++)
{
    int currentNum;
    cin>>currentNum;
    arr[i] = currentNum;
    oppArr[i] = currentNum*-1;
    total += currentNum;
    if(arr[i]>-1){
        flag = true;
    }
    maxSum = max(maxSum,arr[i]);
}
if(flag){
int wrapMax = kadane(oppArr,n) + total;
int nonWrapMax = kadane(arr,n);
maxSum = max(wrapMax,nonWrapMax);
}
std::cout<<maxSum<<endl;
    return 0;
}