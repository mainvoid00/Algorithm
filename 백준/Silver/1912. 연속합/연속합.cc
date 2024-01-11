#include <iostream>

using namespace std;

int dp[100001];

int adj[100001];

int main(void)
{
    int n;
    cin>> n;
    
    for(int i=0;i<n;i++){
        int num;
        cin>> num;
        adj[i]=num;
    }
    
    dp[0]=adj[0];
    int max_adj=dp[0];
    for(int i=1;i<n;i++){
        dp[i]= max(adj[i], dp[i-1]+adj[i]);
        max_adj= max(dp[i], max_adj);
        
    }
    cout<<max_adj;
    
    return 0;
}
