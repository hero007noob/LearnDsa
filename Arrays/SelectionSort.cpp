#include <bits/stdc++.h>
using namespace std;


void selectionSort(int size,int arr[]){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp; 
            }
        }
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
