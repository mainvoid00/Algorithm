#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num;
    int n=0;
    int cnt=0;
    cin>>num;
    n=1000-num;
    if(n>=500){
        cnt=cnt+n/500;
        n%=500;
    }
    if(n>=100){
        cnt=cnt+n/100;
        n%=100;
    }
    if(n>=50){
        cnt=cnt+n/50;
        n%=50;
    }
    if(n>=10){
        cnt=cnt+n/10;
        n%=10;
    }
    if(n>=5){
        cnt=cnt+n/5;
        n%=5;
    }
    if(n>=1){
        cnt=cnt+n/1;
        n%=1;
    }
    cout<<cnt;
    return 0;
}
