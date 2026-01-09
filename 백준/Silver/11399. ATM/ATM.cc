#include <stdio.h>

int arr[1001];

void sort(int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main(void)
{
    int n;
    int total_time=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d", &temp);
        arr[i]=temp;
        
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) sort(i, j);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            total_time+=arr[j];
        }
    }
    
    printf("%d",total_time);
    
    return 0;
}
