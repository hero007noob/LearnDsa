#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    for (int i = 1; i <=3; i++)
    {
        for (int j = 1; j<=x; j++)
        {   
            if(((i+j)%4==0) || (i == 2 && j%4 == 0)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0; 
}