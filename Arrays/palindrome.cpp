#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[100];
    cin >> arr;
    int i = 0;
    while(arr[i] != '\0'){
        i++;
    }
    i--;
    int j = 0;
    bool palindrome = true;
    while(j<i){
        if(arr[j] != arr[i]){
           palindrome = false;
        }
        j++;
        i--;
    }
    if(palindrome){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}