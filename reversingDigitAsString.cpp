#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    int currentValue;
    vector< int > arr;
    cout<< "enter a number"<<endl;
    cin>>x;
    string stri = to_string(x);
    string reverse = "";
    for(int i = stri.length()-1;i>=0;i--){
        reverse += stri[i];
    }
    cout<<reverse;
    return 0; 
}