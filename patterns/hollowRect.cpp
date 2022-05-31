#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x>>z;
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < x; j++)
        {
        if(i==z-1 || j==x-1 || i==0 || j ==0){
            cout<<"* ";
            }else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}