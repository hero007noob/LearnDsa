#include <bits/stdc++.h>
using namespace std;

int sumOfN(int k){
    int sum = 0;
    for (int i = 1; i <=k; i++)
    {
        sum += i;
    }
    return sum;
    
}
int sumOfNaturalNumberFormula(int k){
    return (k*(k+1))/2;
}

int main(){
    int x,y,z;
    cin>>x;
    cout<<sumOfN(x)<<endl;
    cout<<sumOfNaturalNumberFormula(x)<<endl;
    return 0;
}
