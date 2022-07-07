#include <bits/stdc++.h>
using namespace std;

int main(){

int sum = 0;
int index = 0;


int n,s;
cin >> n >> s;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++){
    if(sum<s){
        sum+=arr[i];
    }
    if(sum>s){
        while(sum>s){
        sum-=arr[index];
        index++;
        }
    }
    if(sum == s){
    cout<<index+1<<" "<<i+1;
    return 0;
    }
}
    return 0;
}