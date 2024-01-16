#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int ti[16]={0};
    int pi[16]={0};
    int dp[16]={0};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ti[i]>>pi[i];
        dp[i]=pi[i];
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            if(i-j>=ti[j]){
                dp[i]=max(dp[i],dp[j]+pi[i]);
            }
        }
    }
    int res=0;
    for(int i=1;i<=n;i++){
        if(i+ti[i]<=n+1&&res<dp[i]) res=dp[i];
    }
    cout<<res;
    return 0;
}
