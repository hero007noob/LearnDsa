#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x;
    for(int i = 0; i<x; i++){
        cout<<"hello world"<<endl;
    }
    while(x>0){
        cout<<"hello world"<<x<<endl;
        x/=2;
    }
    do
    {
    cout<<"hello world do"<<x<<endl;
          cin>>x;
    } while (x>0);
    
    return 0;
}