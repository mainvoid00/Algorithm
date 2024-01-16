#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[101]={0};
    int dp[100001]={0};
    int n,k;
    dp[0]=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=k;i++) dp[i]=100001;
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=arr[i];j<=k;j++){
            dp[j]=min(dp[j-arr[i]]+1,dp[j]);
        }
    }
    if(dp[k]==100001) dp[k]=-1;
    cout<<dp[k];
    return 0;
}
