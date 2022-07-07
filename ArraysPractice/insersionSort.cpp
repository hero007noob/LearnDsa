#include <bits/stdc++.h>
using namespace std;

void insersionSort(int size,int arr[]){
    for(int i = 1; i < size; i++){
        int j = i;
        int current = arr[j];
        while(arr[j-1]>current && j >0){
            arr[j]=arr[j-1];
            j--;
        }       
        arr[j] = current; 
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
    insersionSort(n,arr);
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
