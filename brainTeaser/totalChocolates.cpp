#include <bits/stdc++.h>
using namespace std;

int findChoco(int rupees,int price){
    return rupees/price;
}
int findChocoFromWrapper(int wrapper,int wrapperPerChocolate){
    return wrapper/wrapperPerChocolate;
}
int totalChocolate(int rupees,int price,int wrapperPerChocolate){
    int chocolate = findChoco(rupees,price);
    int totalChocolate = chocolate;
    int wrapper = chocolate;
    int extraWrappers = wrapper%wrapperPerChocolate;
    while (chocolate+wrapper > wrapperPerChocolate)
    {
        chocolate=findChocoFromWrapper(wrapper,wrapperPerChocolate);
        wrapper = chocolate+extraWrappers;
        totalChocolate+=chocolate;
        extraWrappers = wrapper%wrapperPerChocolate;
    }
    
    return totalChocolate;
}

int main()
{
    cout<<totalChocolate(15,1,3);
    return 0;
}
