#include <iostream>

using namespace std;

int main()
{
    long dp[101][11]={0};
    for(int i=1;i<=9;i++){
        dp[1][i]=1;
    }
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j==0) dp[i][j]=dp[i-1][j+1]%1000000000;
            else if(j==9) dp[i][j]=(dp[i-1][j-1])%1000000000;
            else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
        }
    }
    int res=0;
    for(int i=0;i<=9;i++){
        res=(res+dp[n][i])%1000000000;
    }
    cout<<res%1000000000;
    return 0;
}
