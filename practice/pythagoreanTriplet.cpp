#include <bits/stdc++.h>
using namespace std;

int maxOfThree(int i, int j , int k){
    if(i>j){
        if(i>k){
            return i;
        }else{
            return k;
        }
    }else{
        if(j>k){
            return j;
        }else{
            return k;
        }
    }
}
int isPythagoreanTriplet(int k,int l,int m){
    int max = maxOfThree(k,l,m);
    return pow(k,2)+pow(l,2)+pow(m,2) == pow(max,2)*2;
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<(isPythagoreanTriplet(x,y,z)?"true":"false")<<endl;
    return 0;
}
