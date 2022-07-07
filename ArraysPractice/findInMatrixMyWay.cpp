#include <bits/stdc++.h>
using namespace std;

int main(){

int r,c,toFind;
cin >> r >> c >> toFind;
int mat[r][c];
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++){

        cin >> mat[i][j];
    
    }
}
int i = 0;
int j = 0;
int check = true;
for (int k = 0; k < r*c; k++)
{
        if(mat[i][j] == toFind){
            cout<<"true"<<endl;
            break;
        }else if(mat[i][j+1]<=toFind && j+1<c && check){
            j++;
        }else if(mat[i+1][j]<=toFind && i+1<r){
            i++;
        }else if(j>0){
            j--;
            check = false;
        }else{
            cout<<"false"<<endl;
            break;
        }
    
}
    return 0;
}