#include <bits/stdc++.h>
using namespace std;

int main(){

int n,m;
cin >> n >>m;
int arr[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++){

        cin >> arr[i][j];
    
    }
}
int trans[m][n];
for (int i = 0; i < m; i++){
    
    for (int j = 0; j < n ; j++){

        trans[i][j] = arr[j][i];

    }
}
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++){

        cout << trans[i][j]<<" ";
    
    }
    cout<<endl;
}
    return 0;
}