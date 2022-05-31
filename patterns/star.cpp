#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    int n = x*2;
    int l = 1;
    for (int i = 1; i <=n; i++)
    {
        if(i<=x){
        for (int j = 1; j<=x-i; j++)
        {   
            cout<<"  ";  
        }
        int m = i*2-1;
        for (int k = 1; k<=m; k++)
        {  
            cout<<"* ";
        }
        }else{
        int j = i-x-1;
        for (; j>0; j--)
        {   
            cout<<"  ";  
        }
        int m = x*2-i+1;
        for (int k = 1; k<=m*2-1; k++)
        {
            cout<<"* ";
        }            
        }
        cout<<endl;
    }
    return 0; 
}