#include <bits/stdc++.h>
using namespace std;

int main(){

int r1,c1,r2,c2;
cin >> r1 >> c1;
int mat[r1][c1];
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c1; j++){

        cin >> mat[i][j];
    
    }
}
cin >> r2 >> c2;
int mat2[r2][c2];
for (int i = 0; i < r2; i++)
{
    for (int j = 0; j < c2; j++){

        cin >> mat2[i][j];
    
    }
}

int matResult[r1][c2];
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c2; j++){

        matResult[i][j] = 0;
    
    }
}
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c2; j++){

        for (int k = 0; k < r2; k++){

        matResult[i][j] += mat[i][k] * mat2[k][j];
        }
    
    }
}
for (int i = 0; i < r1; i++)
{
    for (int j = 0; j < c2; j++){

        cout<<matResult[i][j]<<" ";
    
    }
    cout<<endl;
}
    return 0;
}