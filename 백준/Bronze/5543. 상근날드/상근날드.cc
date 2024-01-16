#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[3];
    int b[2];
    int min1=10000,min2=10000;
    for(int i=0;i<3;i++){
        cin>>a[i];
        if(a[i]<min1) min1=a[i];
    }
    for(int i=0;i<2;i++){
        cin>>a[i];
        if(a[i]<min2) min2=a[i];
    }
    cout<<min1+min2-50;
    return 0;
}
