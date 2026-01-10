#include <stdio.h>

long long distance[100005];
long long cost[100005];

int main(void)
{
    int n;
    long long min_cost;
    long long total_cost=0;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++){
        scanf("%lld", &distance[i]);
    }
    
    for(int i=0;i<n;i++){
        scanf("%lld" ,&cost[i]);
    }
    
    min_cost=cost[0];
    for(int i=0;i<n-1;i++){
        if(cost[i]<min_cost)
            min_cost=cost[i];
        total_cost= total_cost + min_cost*distance[i];
    }
    
    printf("%lld", total_cost);
    
    return 0;
}
