#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;


int main(){
string str;
getline(cin,str);
sort(str.begin(),str.end(),greater<char>());
cout<<str<<endl;
return 0;
}