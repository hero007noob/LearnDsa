#include <bits/stdc++.h>
using namespace std;

int sumOfNNumsReturn(int n){
   if(n==1){ 
        return 1;
   }
   return n*sumOfNNumsReturn(n-1);
}

int main(){
    cout<<sumOfNNumsReturn(3);
    return 0;
}