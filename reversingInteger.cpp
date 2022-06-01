#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    int currentValue;
    int reverse = 0;
    vector< int > arr;
    cout<< "enter a number"<<endl;
    cin>>x;
    while (x!=0)
    {
       int lastDigit = x%10;
       reverse = reverse*10 +lastDigit;
        x = x/10;
    }
    
    cout<<reverse;
    return 0; 
}