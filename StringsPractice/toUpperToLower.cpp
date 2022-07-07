#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

void lowerCase(string *anyCase){
    string lower;
    for (int i = 0; i < (*anyCase).size(); i++)
    {
        if((*anyCase)[i]<91 && (*anyCase)[i]>64)
            (*anyCase)[i]+=32;
    }
    return;
}
string upperCase(string anyCase){
    string upper;
    for (int i = 0; i < anyCase.size(); i++)
    {
        if(anyCase[i]>='a' && anyCase[i]<='z')
            anyCase[i]-=32;
        upper.append(1,char(anyCase[i]));
    }
    
    return upper;
}

int main(){
string str;
getline(cin,str);
string *ptr = &str;
cout<<upperCase(str)<<endl;
lowerCase(ptr);
cout<<str<<endl;
std::transform(str.begin(), str.end(), str.begin(), ::toupper);
cout<<str<<endl;
transform(str.begin(),str.end(),str.begin(),::tolower);
cout<<str<<endl;
return 0;
}