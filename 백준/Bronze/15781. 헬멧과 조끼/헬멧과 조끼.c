#include <stdio.h>
int main()
{
    int N,M;
    int i;
    int maxN=-1,maxM=-1;
    scanf("%d %d",&N,&M);
    int arrN[N];
    int arrM[M];
    for(i=0;i<N;i++){
        scanf("%d",&arrN[i]);
        if(arrN[i]>maxN) maxN=arrN[i];
    }
    for(i=0;i<M;i++){
        scanf("%d",&arrM[i]);
        if(arrM[i]>maxM) maxM=arrM[i];
    }
    printf("%d",maxN+maxM);
    return 0;
}