#include <stdio.h>
int dp[1001];
int arr[1001];
int main(void)
{
  int max=0;
  int i,j;
  int n;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&arr[i]);
    dp[i]=arr[i];
  }

  for(i=1;i<=n;i++){
    for(j=1;j<i;j++){
      if(arr[i]>arr[j]&&dp[j]+arr[i]>dp[i]) dp[i]=arr[i]+dp[j];
    }
    if(max<dp[i]) max=dp[i];
  }
  printf("%d",max);
  return 0;
}
