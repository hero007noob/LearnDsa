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
int addTwoBinary(int a,int b){
        int carry = 0;
        int sum = 0;
        int ans = 1;
    while(a>0 || b>0){
        int lasta = a%10;
        int lastb = b%10;
        switch (lasta+lastb+carry)
        {
        case  0:
            carry = 0;
            sum = 0;
            break;
        case  1:
            carry = 0;
            sum = 1;
            break;
        case  2:
            carry = 1;
            sum = 0;
            break;
        case  3:
            carry = 1;
            sum = 1;
            break;
        default:
            break;
        }
        a /=10;
        b /=10;
        ans = ans*10 + sum;
    }
    if(carry == 1){
        ans = ans*10 + carry;
    }
    return reverseNumber(ans)/10;

}
int main(){
    int x,y;
    cout<<"Enter 2 numbers to add"<<endl;
    cin>>x>>y;
    cout<<addTwoBinary(x,y)<<endl;
    return 0;
}
