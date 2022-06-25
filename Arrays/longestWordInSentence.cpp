#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    char arr[100];
    cin.getline(arr, 100);
    cin.ignore();
    int i = 0;
    while(arr[i] != '\0'){
        i++;
    }
    int maxi,count;
    int st,currentst;
    st = currentst = maxi = count =0;
    for(int j = 0; j <=i; j++){
        if(arr[j] == ' ' || arr[j] == '\0'){
            if(count>maxi){
                st = currentst;
            }
            currentst = j+1;
            maxi = max(maxi,count);
            count = 0;
        }else{
            count++;
        }
    }
    maxi = max(maxi,count);
    for (int j = 0; j < maxi; j++){
        cout << arr[j+st];
    }
    return 0;
}