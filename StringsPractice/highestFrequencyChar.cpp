#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;


int main(){
string str;
int maxi = 0;
int arr[26];
int maxChar;
for (int i = 0; i < 26; i++)
{
    arr[i] = 0;
}
getline(cin,str);
for (int i = 0; i < str.size(); i++)
{
    arr[str[i]-'a']+=1;
    if(arr[str[i]-'a']>maxi){
        maxi = arr[str[i]-'a'];
        maxChar = str[i];
    }
}
cout<<char(maxChar)<<"="<<maxi<<endl;
return 0;
}