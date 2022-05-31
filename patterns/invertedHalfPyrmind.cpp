#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}