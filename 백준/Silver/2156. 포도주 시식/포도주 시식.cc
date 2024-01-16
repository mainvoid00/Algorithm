#include <iostream>
using namespace std;
int Max(int a,int b,int c)
{
    if(b>c){
        if(a>b) return a;
        else return b;
    }
    else{
        if(a>c) return a;
        else return c;
    }
}
int main()
{
    int arr[10001]={0};
    int dp[10001]={0};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    dp[1]=arr[1];
    dp[2]=arr[1]+arr[2];
    for(int i=3;i<=n;i++){
         dp[i]=Max(dp[i-2]+arr[i],dp[i-3]+arr[i-1]+arr[i],dp[i-1]);
    }
    cout<<dp[n];
    return 0;

}
