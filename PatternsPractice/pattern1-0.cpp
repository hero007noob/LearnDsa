#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;

    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j <=i; j++)
        {   int k = (i+j)%2==0?1:0;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0; 
}