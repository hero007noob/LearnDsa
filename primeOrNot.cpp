#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    int i = 2;
    cout<< "enter a positive number"<<endl;
    cin>>x;
    if(x<2){
       cout<<x<<" is not prime";
       return 0; 
    }
    for (; i <x; i++)
    {
        if(x%i==0){
            cout<<x<<" is not prime";
            break;
        }
    }
    if(i==x){
        cout<<x<<" is prime";
    }
    return 0; 
}