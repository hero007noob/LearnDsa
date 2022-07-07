#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;


int main(){
string str;
int maxi = 0;
int count = 1;
getline(cin,str);
sort(str.begin(),str.end());
char current = str[0];
for (int i = 1; i < str.size(); i++)
{
    if(str[i]==current){
        count++;
    }else{
        current = str[i];
        count = 1;
    }
    maxi = max(maxi,count);
}

cout<<str<<endl;
cout<<maxi<<endl;
return 0;
}