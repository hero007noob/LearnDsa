#include <bits/stdc++.h>
using namespace std;
void printName(int a,string name){
    if(a<=0)
        return;
    cout<<name<<endl;
    printName(a-1,name);
}
main(){
printName(5,"hero");
}