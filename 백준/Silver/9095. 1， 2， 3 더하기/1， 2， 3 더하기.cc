#include <stdio.h>
int main(void)
{
  int testcase;
  int dp[12]={};
  dp[1]=1;
  dp[2]=2;
  dp[3]=4;
  scanf("%d",&testcase);

  for(int i=0;i<testcase;i++){
    int n;
    scanf("%d",&n);
    for(int j=4;j<=n;j++){
      dp[j]=dp[j-1]+dp[j-2]+dp[j-3];
    }
    printf("%d\n",dp[n]);
  }
  return 0;
}
