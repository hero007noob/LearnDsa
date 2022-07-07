#include <bits/stdc++.h>
using namespace std;

void printtillN(int n,int c = 1){
   if(n< c) return;
   cout<<c<<endl;
   c++;
   printtillN(n,c);
}

int main(){
printtillN(6);
return 0;
}