#include <iostream>
#define SIZE 1000001
using namespace std;

void selection_sort(int arr[], int n);
void intersection_sort(int arr[], int n);
void bubble_sort(int arr[], int n);
void swap(int &a, int &b);
int main(void)
{
    int n;
    int arr[SIZE]={0};
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    //selection_sort(arr,n);
    //bubble_sort(arr,n);
    intersection_sort(arr,n);
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
    for(int i=0;i<n-2;i++) {
        min_index = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i],&arr[min_index]);
    }
}

void bubble_sort(int arr[], int n) {

    int i,j;

    for (i = 0; i < n-1; i++) {
        bool swapped = false;
        for (j=0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void intersection_sort(int arr[], int n) {
    for (int i=1;i < n; i++) {
        int key = arr[i];
        int j=i;
        for (; j>0 && arr[j-1] > key; j--) {
            arr[j] = arr[j-1];
        }
        arr[j] = key;


    }
}