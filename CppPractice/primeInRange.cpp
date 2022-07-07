#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y;
    for(int k = x; k<=y; k++){
    int i = 2;
    for(i=2; i<k; i++){
        if(k%i!=0){
            continue;
        }
        cout<<"non prime"<<endl;
        break;
    }   
    if(i==k||k==1){
    cout<<"prime"<<endl;
    }
    }
    return 0;
}