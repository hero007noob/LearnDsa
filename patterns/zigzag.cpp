#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,z;
    char y;
    cin>>x;
    int n = x*2;
    int l = 1;
    int top = 3;
    int mid = 2;
    int bot = 1;
    for (int i = 1; i <=3; i++)
    {
        for (int j = 1; j<=x; j++)
        {   
            if(i == 1 && j == top){
                cout<<"* ";
                top+=4;
            }else if (i == 2 && j == mid)
            {
                cout<<"* ";
                mid+=2;
            }else if (i == 3 && j == bot)
            {
                cout<<"* ";
                bot+=4;
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0; 
}