#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    int n = x*2;
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j<=x-i; j++)
        {   
            cout<<"  ";  
        }
        int m = i*2-1;
        for (int k = 1; k<=m; k++)
        {  
        if(k<=x-(x-i)){
            cout<<m+2-(i+k)<<" ";  
        }else{
            cout<<k+i-m<<" ";
        }
        }
        cout<<endl;
    }
    return 0; 
}