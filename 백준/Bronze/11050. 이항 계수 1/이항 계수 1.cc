#include <stdio.h>
#include <iostream>
using namespace std;
int B[10][10]={0};
    int f(int n,int k)
    {
        if(k==n||k==0) return 1;
        if(B[n][k]) return B[n][k];
        return B[n][k]=f(n-1,k)+f(n-1,k-1);
    }
int main(void)
{
    int n,k;
    cin>>n>>k;
    cout<<f(n,k);
    return 0;
}
