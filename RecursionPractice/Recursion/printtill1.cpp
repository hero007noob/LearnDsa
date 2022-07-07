#include <bits/stdc++.h>
using namespace std;

void printtill1(int n){
   if(n<1) return;
   cout<<n<<endl;
   n--;
   printtill1(n);
}

int main(){
printtill1(6);
return 0;
}