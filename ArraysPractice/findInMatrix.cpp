#include <bits/stdc++.h>
using namespace std;

int main(){

int r,c,toFind;
cin >> r >> c >> toFind;
int mat[r][c];
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
        cin >> mat[i][j];
}
int i = 0;
int j = c-1;
int found = false;
while(i<r && j>=0)
{
    if(mat[i][j] == toFind){
        found = true;
        break;
    }else if(mat[i][j]<=toFind){
        i++;
    }else{
        j--;
    }
}
if(found){
    cout<<"found "<<endl;
}else{
    cout<<"not found "<<endl;
}
    return 0;
}