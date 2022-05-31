#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    int n = x*2;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if(i<=x){
            if(j<=i || j>n-i){
            cout<<"*";
            }else{
            cout<<" ";
            }
            }else{
            if(j<=n+1-i || j>=i){
            cout<<"*";
            }else{
            cout<<" ";
            }
            }
        }
        cout<<endl;
    }
    return 0; 
}