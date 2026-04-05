#include <iostream>
#define SIZE 1000001
using namespace std;

void selection_sort(int arr[], int n);
//void intersection_sort(int arr[], int n);
//void bubble_sort(int arr[], int n);
void swap(int &a, int &b);
int main(void)
{
    int n;
    int arr[SIZE]={0};
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    selection_sort(arr,n);

    for (int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }

    return 0;
}


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b=temp;
}


void selection_sort(int arr[], int n) {
    int min_index;
    for(int i=0;i<n-1;i++) {
        min_index = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i],&arr[min_index]);
    }
}