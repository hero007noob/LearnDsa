#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    int l = 1;
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j<=x-i; j++)
        {   
            cout<<"  ";  
        }
        int m = i*2-1;
        for (int k = 1; k<=m; k++)
        {  
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = x; i >=1; i--)
    {
        for (int j = 1; j<=x-i; j++)
        {   
            cout<<"  ";  
        }
        int m = i*2-1;
        for (int k = 1; k<=m; k++)
        {  
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; 
}