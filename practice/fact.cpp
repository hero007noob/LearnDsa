#include <bits/stdc++.h>
using namespace std;
void fact(int x);
int main(){
    int x,y;
    cout<< "enter a number"<<endl;
    cin>>x;
    fact(x);
    return 0; 
}
void fact(int x){
    int result = 1;
    for(int i=x;i>0;i--){
        result *= i;
    }
    cout<<"fact of "<<x<<" is "<<result<<endl;
}