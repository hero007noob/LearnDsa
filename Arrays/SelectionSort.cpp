#include <bits/stdc++.h>
using namespace std;


void selectionSort(int size,int arr[]){
    for (int i = 0; i < size-1; i++)
    {
        int minIdx = i;
        for (int j = i; j < size; j++)
        {
            if(arr[j]<arr[minIdx])
                minIdx = j;
        }
        swap(arr[i],arr[minIdx]);
    }  
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(n,arr);
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
