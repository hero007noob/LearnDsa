#include <bits/stdc++.h>
using namespace std;
int fact(int x);
int ncr(int n,int r);
int main(){
    int x,y;
    cout<< "enter value of n and r"<<endl;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<ncr(i,j)<<"  ";
        }
        cout<<endl;
    }
    return 0; 
}

int ncr(int n,int r){
    return fact(n)/(fact(n-r) * fact(r));
}
int fact(int n){
    int factorial = 1;
    for(int i=2; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}