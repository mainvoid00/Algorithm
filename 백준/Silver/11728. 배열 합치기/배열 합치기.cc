#include <stdio.h>
#include <string.h>

void qsort(int *arr, int start, int end){
    //분할된 원소가 0개이거나 1개 일때까지 함수 호출
    if(start>=end){
        return;
    }

    int pivot = start;	//피봇은 첫 번째 원소
    int i = pivot+1;	//i는 피봇 다음원소
    int j = end;	//j는 마지막 원소
    int temp;

    while(i<=j){
        //피봇 보다 큰 값 만날 때 까지
        while(i<=end && arr[i]<=arr[pivot]){
            ++i;
        }
        //피봇 보다 작은 값 만날 때 까지
        while(j>start && arr[j]>=arr[pivot]){
            --j;
        }

        //위에서 계산된 i와 j가 만나거나 엇갈리면 종료
        if(i>=j) break;

        //두 원소 교환
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    //피봇 정렬 완료
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;

    qsort(arr, start, j-1);	//피봇 중심으로 왼쪽부분 분할
    qsort(arr, j+1, end);	//피봇 중심으로 오른쪽부분 분할

}

int main(void)
{
    int arr[2000001]={0};
    int a,b;
    int size_a,size_b;
    scanf("%d %d",&size_a,&size_b);
    for (int i=0;i<size_a;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=size_a;i<size_a+size_b;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr, 0, size_a+ size_b -1);

    for (int i=0;i<size_a+size_b; i++)
        printf("%d ",arr[i]);

    return 0;
}