#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1500001
int T[MAX];
int P[MAX];
int dp[MAX];
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>T[i];
    cin>>P[i];
  }
  for(int i=n;i>=1;i--){
    if(i+T[i]>n+1) dp[i]=dp[i+1];
    else{
      dp[i]= max(P[i]+dp[i+T[i]],dp[i+1]);
    }
  }
  cout<<dp[1];
  return 0;
}
