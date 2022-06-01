#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    int i = 2;
    int flag = 1;
    cout<< "enter a positive number"<<endl;
    cin>>x;
    if(x<2){
       cout<<x<<" is not prime";
       return 0; 
    }
    for (; i <=sqrt(x); i++)
    {
        if(x%i==0){
            cout<<x<<" is not prime";
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout<<x<<" is prime";
    }
    return 0; 
}