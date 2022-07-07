#include <bits/stdc++.h>
using namespace std;

void printtill1(int i,int n){
   if(i>n) return;
   printtill1(i+1,n);
   cout<<i<<endl;
}

int main(){
printtill1(1,6);
return 0;
}