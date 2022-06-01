#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    int reverse = 0;
    int result = 0;
    int count = 0;
    int xCopy;
    vector< int > arr;
    cout<< "enter a number"<<endl;
    cin>>x;
    xCopy =x;
    while (xCopy>0)
    {
        int lastDigit = xCopy%10;
        xCopy = xCopy/10;
        count++;
    }
    xCopy = x;
    while (xCopy>0)
    {   
        int lastDigit = xCopy%10;
        result +=  round(pow(lastDigit,count));
        xCopy = xCopy/10;
    }
    if(result == x){
        cout<<"ArmstrongNumber"<<endl;
    }else{
        cout<<"not a ArmstrongNumber"<<endl;
    }

    return 0; 
}