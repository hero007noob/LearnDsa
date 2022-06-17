#include <bits/stdc++.h>
using namespace std;

int longestArthmeticSubArray(int size,int array[]){
int max = 0;
    int len = 2;
    int diff = array[1] - array[0];
    for (int k = 1; k < size-1; k++)
    {
        if(array[k+1] - array[k] == diff){
            len++;
        }else{
            diff = array[k+1] - array[k];
            len = 2;
        }
        if(len>max){
            max = len;
        }
    }
    return max;
}
int longestArthmeticSubArrayWhile(int size,int array[]){
    int max = 0;
    int len = 2;
    int diff = array[1] - array[0];
    int k = 2;
    while ( k < size)
    {
        if(array[k] - array[k-1] == diff){
            len++;
        }else{
            diff = array[k] - array[k-1];
            len = 2;
        }
        if(len>max){
            max = len;
            }
        k++;
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<longestArthmeticSubArray(n,arr)<<endl;
    cout<<longestArthmeticSubArrayWhile(n,arr)<<endl;
    return 0;
}
