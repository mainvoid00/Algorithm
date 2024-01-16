#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fibo[n]={0,1};
    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cout<<fibo[n];
    return 0;
}
