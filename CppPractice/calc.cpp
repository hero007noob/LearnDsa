#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x>>y>>z;
    switch(y){
        case '+':
        cout<<x+z;
        break;
        case '-':
        cout<<x-z;
        break;
        case '*': 
        cout<<x*z;
        break;
        case '/': 
        cout<<x/z;
        break;
        default:
        break;
    }
    
    return 0;
}