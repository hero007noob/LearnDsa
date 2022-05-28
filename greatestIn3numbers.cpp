#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x;
    if(x>y){
        if(x>z){
            cout<<x;
        }else{
            cout<<z;
        }
    }else{
        if(y>z){
            cout<<y;
        }else{
            cout<<z;
        }
    }
        cout<<" is Biggest";
    return 0;
}