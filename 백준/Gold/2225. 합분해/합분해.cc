#include <iostream>

using namespace std;

int main()
{
    long dp[201][201]={0};
    int n,k;
    cin>>n>>k;
    for(int i=0;i<=n;i++){
        dp[1][i]=1;
    }
    for(int i=2;i<=k;i++){
        for(int j=1;j<=n;j++){
            for(int l=1;l<=j;l++){
                dp[i][j]+=dp[i-1][l];
            }
            dp[i][j]=(dp[i][j]+1)%1000000000;
        }
    }
    cout<<dp[k][n];
    return 0;
}
