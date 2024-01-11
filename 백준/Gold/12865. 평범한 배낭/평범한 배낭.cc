#include <iostream>

using namespace std;

int dp[101][100001];
int adj[101][2];          // 0 == weight 1 == value
int main(void)
{
    int w,n,v;
    
    cin>>n>>w;
    
    for(int i=1;i<=n;i++){
        cin>>adj[i][0] >> adj[i][1];
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(j-adj[i][0]>=0)
                dp[i][j]= max(dp[i-1][j], dp[i-1][j-adj[i][0]] + adj[i][1]);
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<< dp[n][w];
    return 0;
}
