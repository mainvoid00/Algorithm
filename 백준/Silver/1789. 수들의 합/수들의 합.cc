#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned long n;
    unsigned long r;
    cin>>n;
    r=sqrt(n*2);
    while(1){
        if(r*(r+1)>2*n) break;
        else r+=1;
    }
    r-=1;
    cout<<r;
    return 0;
}
