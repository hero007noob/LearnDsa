#include <bits/stdc++.h>
using namespace std;

void sumOfNNumsPrint(int n,int sum){
   if(n<1){
   cout<<sum; 
   return;
   } 
      
   sumOfNNumsPrint(n-1,sum+n);
   // return sum;
}

int main(){
sumOfNNumsPrint(5,0);
return 0;
}