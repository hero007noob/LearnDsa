#include <bits/stdc++.h>
using namespace std;
int fact(int x);
int ncr(int n,int r);
int main(){
    int x,y;
    cout<< "enter value of n and r"<<endl;
    cin>>x>>y;
    cout<<ncr(x,y)<<endl;
    return 0; 
}
int ncr(int n,int r){
    return fact(n)/(fact(n-r) * fact(r));
}
int fact(int x){
    int result = 1;
    for(int i=x;i>0;i--){
        result *= i;
    }
    return result;
}