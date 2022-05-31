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
            cout<<" ";  
        }
        for (int k = 1; k<=i; k++)
        {   
            cout<<k<<" ";  
        }
        cout<<endl;
    }
    return 0; 
}