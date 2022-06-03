#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int x){
    int reverse = 0;
    while (x!=0)
    {
       int lastDigit = x%10;
       reverse = reverse*10 +lastDigit;
        x = x/10;
    }
    return reverse;
}
int decimalToAny(int n,int base){
    int result=2;
    while(n>0){
        result = result*10+n%base;
        n=n/base;
    }
    return reverseNumber(result)/10;
}
int anyToDecimal(int n,int base){
    int decimalValue = 0;
    int count = 0;
    while(n>0){
        int lastdigit = n%10;
        if(lastdigit){
        decimalValue+= (lastdigit*pow(base,count));
        }
        n=n/10;
        count++;
    }
    return decimalValue;
}
int hexToDecimal(string x, int y){
    int decimalValue = 0;
    int currentValue = 0;
    int len = x.length();
    for (int i = 0; i < len; i++)
    {
        switch (tolower(x[i]))
            {
            case 'a' :
                currentValue = 10;
                break;
            case 'b':
                currentValue = 11;
                break;
            case 'c':
                currentValue = 12;
                break;
            case 'd':
                currentValue = 13;
                break;
            case 'e':
                currentValue = 14;
                break;
            case 'f':
                currentValue = 15;
                break;
            default:
                currentValue = stoi(string(1, x[i]));
                break;
            }
        decimalValue+= currentValue*pow(16,len-(i+1));
    }
    return decimalValue;
}

int hexToDecimalAscii(string x, int y){
    int decimalValue = 0;
    int currentValue = 0;
    int len = x.length();
    for (int i = 0; i < len; i++)
    {
        if(x[i]>= '0' && x[i]<= '9'){
            currentValue = x[i] - '0';
        }else if(tolower(x[i]) >= 'a' && tolower(x[i])<= 'f'){
            currentValue = tolower(x[i])-'a' +10;
        }
        decimalValue+= currentValue*pow(16,len-(i+1));
    }
    return decimalValue;
}

int main(){
    string x;
    int num = 0;
    int y;
    int selection;
    cout<<"1. Any to decimal"<<endl;
    cout<<"2. Decimal To Any"<<endl;
    cin>>selection;
    cout<<"Enter number and base"<<endl;
    cin>>x>>y;
    switch (selection)
    {
    case 1:
        if(y==16){
            cout<<hexToDecimal(x,y)<<endl;
            cout<<hexToDecimalAscii(x,y);
        }else{
            num = stoi(x);
            cout<<anyToDecimal(num,y);
        }
        break;
    case 2:
        num = stoi(x);
        cout<<decimalToAny(num,y);
        break;

    default:
        break;
    }
    return 0;
}
