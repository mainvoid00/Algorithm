#include <stdio.h>

int distance[100000];
int cost[100001];

int main(void)
{
    int n;
    int min_cost=10001;
    int total_cost=0;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++){
        int temp;
        scanf("%d", &temp);
        distance[i]=temp;
    }
    
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d" ,&temp);
        cost[i]=temp;
    }
    
    for(int i=0;i<n-1;i++){
        if(cost[i]<min_cost)
            min_cost=cost[i];
        total_cost= total_cost + min_cost*distance[i];
    }
    
    printf("%d", total_cost);
    
    return 0;
}
