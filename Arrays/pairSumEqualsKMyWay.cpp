#include <bits/stdc++.h>
using namespace std;

int main(){

int n,k;
cin >> n >> k;
int arr[n];
int N = n*(n+1)/2;
for (int i = 0; i < n; i++)
{
   cin >> arr[i];
}

for( int j = 0; j< N; j++){
    int idx1 =j/n;
    int idx2 =j%n;
    if(idx1 != idx2 && idx2 != 0){
        if(k == arr[idx1] + arr[idx2]){
            cout<<"true"<<endl;
            return 0;
        }
    }
}
cout<<"false"<<endl;


    return 0;
}