#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;
#define SIZE 100001
int arr[SIZE];
int compare(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 <num2) return -1;
	if (num1 > num2) return 1;
	return 0;
}

int BinarySearch_custom(int arr[], int n, int x) // 이진 탐색
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        //PrintHelper(arr, n, left, right);

        int middle = (left+right)/2 ; // 정수 나누기 (버림)
         // cout << "middle " << middle << endl;

        if (arr[middle] < x)
        {
        	left=middle+1;
        	// cout << "right " << right << endl;
        }
        else if (arr[middle] > x)
        {
        	right=middle-1;

        	// cout << "left " << left << endl;
        }
        else
        {
        	// cout << "Found " << middle << endl;
        	return 1;
        }

        //break; // 임시: 무한루프 방지
    }
	return 0;

}

int main()
{
	ios_base::sync_with_stdio(false);  // C 표준 입출력과 동기화 해제
	cin.tie(NULL);                     // cout과 cin의 묶음 해제
	// int arr[SIZE]={0};
	int target[SIZE]={0};
	//int target;
    int N, M;
	cin>>N;
	for (int i=0;i<N;i++)
		cin>>arr[i];

	qsort(arr, N, sizeof(int), compare);

	// for (int i=0;i<N;i++)
	// 	cout<<arr[i]<<" ";

	cin>>M;

	for (int i=0;i<M;i++) {
		cin>>target[i];
		cout << BinarySearch_custom(arr, N, target[i])<<"\n";
	}





    return 0;
}