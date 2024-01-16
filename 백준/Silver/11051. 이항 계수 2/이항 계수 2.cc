#include <stdio.h>
#include <iostream>
using namespace std;
int B[1001][1001]={0};
int main(void)
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j||j==0){
                B[i][j]=1;
                continue;
            }
            B[i][j]=(B[i-1][j]+B[i-1][j-1])%10007;
        }
    }
    cout<<B[n][k];
    return 0;
}
