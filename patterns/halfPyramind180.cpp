#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j <=x; j++)
        {
            if(j>x-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}