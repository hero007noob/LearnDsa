#include <bits/stdc++.h>
using namespace std;

void sumOfAllSubarrays(int size,int array[]){
    for (int i = 0; i < size; i++)
    {       
        int sum = 0;
        for(int j = i; j < size; j++){
            sum += array[j];
            cout<<sum <<endl;
        }
    }
    cout<<endl;
    
}

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int arr2[n];
    sumOfAllSubarrays(n,arr);
    return 0;
}