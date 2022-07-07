#include <bits/stdc++.h>
using namespace std;

void insersionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j = i-1;
        int temp = arr[i];

        for(;j>=0 && arr[j]>temp ;j--){
            arr[j+1] = arr[j];   
        }
        arr[j+1]=temp;
    }
}

int main(){

int n,k;
cin >> n >>k;
int arr[n];
int st=0;
int end=n-1;
for (int i = 0; i < n; i++)
{
   cin >> arr[i];
}
insersionSort(arr,n);
for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<" ";
}
cout<<endl;
while(st<end){
    int sum = arr[st]+arr[end];
    if(sum>k){
        end--;
    }else if(sum<k){
        st++;
    }else if(sum==k){
        cout<<st<<" "<<end<<" "<<"true"<<endl;
        return 0;
    }
}
 if(st == end){
        cout<<"false not found"<<endl;
    }


    return 0;
}