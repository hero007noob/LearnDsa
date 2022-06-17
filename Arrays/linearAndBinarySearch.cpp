#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int key,int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[],int key,int size){
    log(size);
    int start = 0;
    int end = size;
    
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(key == arr[mid]){
            return mid;
        }else if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    int size = 7;
    int arr[size] = { 8, 10, 12, 18, 20, 42 ,72};
    array<int, 6> numArray;
    int x;
    cin >> x;
    
    cout<<linearSearch(arr,x,size)<<endl;
    cout<<binarySearch(arr,x,size)<<endl;
    return 0;
}
