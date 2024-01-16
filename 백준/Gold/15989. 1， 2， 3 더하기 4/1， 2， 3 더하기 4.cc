#include <iostream>

using namespace std;

int dp[100001][4];

int main(void)
{
    
    dp[1][1]=1;
    dp[2][1]=1;
    dp[2][2]=1;
    dp[3][1]=1;
    dp[3][2]=1;
    dp[3][3]=1;
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        
        if(n<4 || dp[n][3]!=0){
            cout<<dp[n][1]+dp[n][2]+dp[n][3]<<endl;
            continue;
        }
        
        for(int j=4;j<=n;j++){
            dp[j][1]=dp[j-1][1];
            dp[j][2]=dp[j-2][1]+dp[j-2][2];
            dp[j][3]=dp[j-3][1]+dp[j-3][2]+dp[j-3][3];
        }
        cout<<dp[n][1]+dp[n][2]+dp[n][3]<<endl;
    }
    
    return 0;
}
