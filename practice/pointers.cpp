#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void increment(int a){
    a++;
}
void incrementPtr(int *a){
    ++*a;
}
int main(){
    int arr[] = {1,2,4,6};
    int *ptr = arr;
    // cout<<arr<<endl;
    // cout<<*ptr<<endl;
    // int a = 2;
    int* ptr2 = &arr[1];
    // cout<<*ptr2<<endl;
    // ++*ptr2;
    // cout<<*ptr2<<endl;
    // incrementPtr(ptr2);
    // incrementPtr(ptr2);
    // cout<<*ptr2<<endl;
    // increment(*ptr2);
    // cout<<*ptr2<<endl;

    // cout<<*ptr<<endl;
    // cout<<*ptr2<<endl;
    // swap(ptr,ptr2);
    // cout<<*ptr<<endl;
    // cout<<*ptr2<<endl;

    // int a = 1;
    // int b = 5;
    // swap(a,b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    // swap(&a,&b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    

    return 0;
}