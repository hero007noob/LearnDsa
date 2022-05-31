#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    int n = x*2;
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j<n; j++)
        {   
        if(j>x-i && j<=n-i){
            cout<<"*";
        }else{
            cout<<"-";
        }
        }
        cout<<endl;
    }
    return 0; 
}