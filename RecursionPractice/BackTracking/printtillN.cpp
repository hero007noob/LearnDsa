#include <bits/stdc++.h>
using namespace std;

void printtillN(int n){
   if(n<1) return;
   printtillN(n-1);
   cout<<n<<endl;
}

int main(){
printtillN(6);
return 0;
}