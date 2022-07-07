#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    cout<<"Enter the size of arr"<<endl;
    cin>>x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin>>arr[i];
        maxNum = max(maxNum,arr[i]);
        minNum = min(minNum,arr[i]);
    }
    cout<<"min "<<minNum<<" max "<<maxNum<<endl;
    return 0;
}
