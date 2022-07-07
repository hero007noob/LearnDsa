#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for (int k = 1; k <= n; k++)
    {
        cout<<max<<endl;
        if(arr[k]>max){
            max = arr[k];
        }
    }
    return 0;
}
