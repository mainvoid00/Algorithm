#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=x) continue;
        cout<<arr[i]<<" ";
    }
    return 0;
}
