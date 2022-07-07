#include <bits/stdc++.h>
using namespace std;


//*NOT Working Fix MEmory*//
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minIdx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long N = (int)1e6+2;
    long minArray[N];
    for (int i = 0; i<N; i++){
        minArray[i] = -1;
    }

    for (int i = 0; i < n; i++){
        if(minArray[arr[i]] == -1){
            minArray[arr[i]] = i;

        }else{
            if(minArray[arr[i]] < i){
            if(minArray[arr[i]]>minIdx){
                minIdx = minArray[arr[i]];
            }
             minArray[arr[i]] = i;
            }
        }
    }
    cout<<minIdx;
    return 0;
}
