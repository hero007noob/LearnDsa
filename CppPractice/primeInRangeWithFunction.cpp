#include <bits/stdc++.h>
using namespace std;

bool isPrime(int k){
    for(int l = 2;l<=sqrt(k);l++){
        if(k%l==0){
            return false;
        }
    }
    return true;
}

void primeInRange(int x,int y){
    for(int k = x; k<=y; k++){
        cout<<k<<(isPrime(k)?" is prime":" is not prime")<<endl;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y;
    primeInRange(x,y);
    return 0;
}
