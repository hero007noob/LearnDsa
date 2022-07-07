#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int size,int arr[]){
    for(int i = 1; i < size; i++){
        for (int j = 0; j < size-i; j++)
        {
           if(arr[j]>arr[j+1]){
               int temp = arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
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
    bubbleSort(n,arr);
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
