#include <bits/stdc++.h>
using namespace std;

void fibo(int k){
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    for (int i = 1; i <=k; i++)
    {
        cout<<num1<<endl;
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;

    }
    
}

int main(){
    int x,y,z;
    cin>>x;
    fibo(x);
    return 0;
}
